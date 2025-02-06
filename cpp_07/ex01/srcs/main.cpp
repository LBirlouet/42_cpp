#include "../includes/iter.hpp"

int main(){
    std::string a = "This is a test with char";
	iter<const char>(a.c_str(), a.length(), print);

    std::cout << "\n" << std::endl;

	int tab[] = {1, 2, 3, 4, 5};
	iter<int>(tab, 5, print);

}