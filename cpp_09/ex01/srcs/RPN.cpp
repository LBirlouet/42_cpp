#include "../includes/RPN.hpp"

RPN::RPN(void){
}

RPN::RPN(const RPN& from){
    *this = from;
}

RPN& RPN::operator=(const RPN& from){
	(void)from;
    return *this;
}

RPN::~RPN(void){
}

bool RPN::checkArg(const std::string str){
    int countNumbers = 0;
    int countOperators = 0;
    size_t i = 0;

    while (i < str.length()){
        while (i < str.length() && str[i] == ' ') 
            i++;
        if (i >= str.length()) 
            break;
        if (std::isdigit(str[i])){
            countNumbers++;
            while (i < str.length() && std::isdigit(str[i]))
                i++;
        }
        else if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/'){
            countOperators++;
            if (countOperators >= countNumbers)
                return false;
            i++;
        }
        else
            return false;
        if (i < str.length() && str[i] != ' ')
            return false;
    }
    return (countNumbers == countOperators + 1);
}

void RPN::doOperation(const std::string str){
	for (size_t i = 0; i < str.size(); i++){	
		char c = str[i];
		if (c == ' ')
			continue;
		else if (isdigit(c)){
			int number = c - '0';
			nb.push(number);
		}
		else if (c == '+' && nb.size() >= 2){
			double b = nb.top();
			nb.pop();
			double a = nb.top();
			nb.pop();
			nb.push(a + b);
		}
		else if (c == '-' && nb.size() >= 2){
			double b = nb.top();
			nb.pop();
			double a = nb.top();
			nb.pop();
			nb.push(a - b);
		}
		else if (c == '*' && nb.size() >= 2){
			double b = nb.top();
			nb.pop();
			double a = nb.top();
			nb.pop();
			nb.push(a * b);
		}
		else if (c == '/' && nb.size() >= 2){
			double b = nb.top();
			nb.pop();
			double a = nb.top();
			nb.pop();
			nb.push(a / b);
		}
	}
	if (nb.size() == 1){
		double result = nb.top();
		nb.pop();
		std::cout << "Result: " << result << std::endl;
	}
    else
		std::cout << "Error : number not less than 10" << std::endl;
}