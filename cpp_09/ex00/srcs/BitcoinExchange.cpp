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
        if (!(iss >> value)) {
            std::cerr << "Error: invalid exchange rate format in \"data.csv\"" << std::endl;
            exit(1);
        }
        dateValues[date] = value;
    }
    std::cout<<"[BitcoinExchange] constructor called" <<std::endl;
}

void 	BitcoinExchange::compareData(const std::string &filename){
    std::ifstream file(filename.c_str());

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

// compare data and print the result

    }
    
}

// default destructor (Orthodox Canonical Form)
BitcoinExchange::~BitcoinExchange(void){
    std::cout<<"[BitcoinExchange] default destructor called" <<std::endl;
}