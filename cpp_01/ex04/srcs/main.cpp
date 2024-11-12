#include <fstream>
#include <iostream>

int main(int ac, char **av){

std::string test1 = "bonjour ";
std::string test2 = "toi ";
std::string test3 = "nombril ";


std::ifstream myFile;
std::ofstream newFile;
std::string filename;
std::string newFilename;
std::string toReplace;
std::string replacement;

if (ac != 4)
    return 0;

filename = av[1];
toReplace = av[2];
replacement = av[3];

myFile.open(filename.c_str());

if (myFile.is_open())
    ;
else{
    std::cout << "Failed to open the file!" << std::endl;
    return 0;
}


newFilename = filename + ".replace";

newFile.open(newFilename.c_str());


myFile.close();
newFile.close();
// std::cout << test1 << test2 << test3 << std::endl;

// test2.swap(test3);

// std::cout << test1 << test2 << test3 << std::endl;


// if (ac == 4){

// }
// else
//     std::cout << "Bad arguments" << std::endl;
}