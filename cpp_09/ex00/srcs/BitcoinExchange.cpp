#include "../includes/BitcoinExchange.hpp"

// default constructor (Orthodox Canonical Form)
BitcoinExchange::BitcoinExchange(){
    std::cout<<"[BitcoinExchange] default constructor called" <<std::endl;
}

// copy constructor (Orthodox Canonical Form)
BitcoinExchange::BitcoinExchange(const BitcoinExchange& cp) : dateValues(cp.dateValues) {
    std::cout << "[BitcoinExchange] Copy constructor called" << std::endl;
}

// copy assignment operator (Orthodox Canonical Form)
BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& cp){
    if (this != &cp)
        dateValues = cp.dateValues;
    std::cout << "[BitcoinExchange] Copy assignment operator called" << std::endl;
    return *this;
}

// constructor
BitcoinExchange::BitcoinExchange(const std::string &filename){
    std::string date;
    std::string valueStr;
    std::ifstream file(filename.c_str());
    double value;

    if (!file){
        std::cerr << "Error: missing file \"data.csv\"" << std::endl;
        exit(1);
    }
    std::string line;
	std::getline(file, line);
    if (line != "date,exchange_rate"){
        std::cerr << "Error: bad data in \"data.csv\"" << std::endl;
        exit(1);
    }
    while (std::getline(file, line)){
        date = line.substr(0, line.find(","));
        valueStr = line.substr(line.find(",") + 1, line.length());
        std::istringstream iss(valueStr);
        if (!(iss >> value)){
            std::cerr << "Error: invalid exchange rate format in \"data.csv\"" << std::endl;
            exit(1);
        }
        dateValues[date] = value;
    }
    std::cout<<"[BitcoinExchange] constructor called" <<std::endl;
}

bool checkString(std::string str){
    std::string date = str.substr(0, 10);
    int year, month, day;
    char dash1, dash2;
    double value;
    std::istringstream iss(date);

    if (date.length() != 10 || date[4] != '-' || date[7] != '-' || str[10] != ' ' || str[11] != '|' || str[12] != ' ' || str.length() < 13){
        std::cerr << "Error: bad input => " << str << std::endl;
        return false;
    }
    if (str[13] == '-'){
        std::cerr << "Error: not a positive number." << std::endl;
        return false; 
    }
    if (!(iss >> year >> dash1 >> month >> dash2 >> day) || dash1 != '-' || dash2 != '-'){
        std::cerr << "Error: bad input => " << str << std::endl;
        return false;
    }
    if (year < 1900 || month < 1 || month > 12 || day < 1){
        std::cerr << "Error: bad input => " << str << std::endl;
        return false;
    }
    int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))){
        std::cerr << "Error: bad input => " << str << std::endl;
        daysInMonth[1] = 29;
    }
    if (day > daysInMonth[month - 1]){
        std::cerr << "Error: bad input => " << str << std::endl;
        return false;
    }
    std::istringstream val(str.substr(13, str.length()));
    if (!(val >> value)) {
        std::cerr << "Error: bad input => " << str << std::endl;
        return false;
    }
    if (value > INT_MAX){
        std::cerr << "Error: too large a number." << std::endl;
        return false;        
    }
    return true;
}

void 	BitcoinExchange::compareData(const std::string &filename){
    std::ifstream file(filename.c_str());
    double value;

    if (!file){
        std::cerr << "Error: bad file in input" << std::endl;
        return;
    }
    std::string line;
	std::getline(file, line);
    if (line != "date | value"){
        std::cerr << "Error: bad data in \"" << filename << "\"" << std::endl;
        return;
    }
   while (std::getline(file, line)){
        if (!checkString(line))
            continue;        
        std::istringstream val(line.substr(13, line.length()));
        if (!(val >> value)){
            std::cerr << "Error" << std::endl;
            return;
        }
        std::string date = line.substr(0, 10);
        std::map<std::string, double>::iterator it = dateValues.lower_bound(date);
        if (it == dateValues.end()){
            if (dateValues.empty()){
                std::cerr << "Error: no available exchange rate data." << std::endl;
                continue;
            }
            --it;
        }
        else if (it->first != date){
            if (it == dateValues.begin()){
                std::cerr << "Error: no previous exchange rate available for " << date << std::endl;
                continue;
            }
            --it;
        }
        std::cout << date << " => " << value << " = " << (value * it->second) << std::endl;
    }    
}

// default destructor (Orthodox Canonical Form)
BitcoinExchange::~BitcoinExchange(void){
    std::cout<<"[BitcoinExchange] default destructor called" <<std::endl;
}