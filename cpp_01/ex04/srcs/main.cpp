#include <fstream>
#include <iostream>
#include <sstream>

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

std::string fileContent;
std::string newfileContent;
size_t  i = 0;
size_t  j = 0;

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



std::stringstream buffer;
    
buffer << myFile.rdbuf();
fileContent = buffer.str();

std::cout << "test" << fileContent << std::endl;

while ((i = fileContent.find(toReplace, j)) != std::string::npos)
{
    newfileContent.append(fileContent, j, i - j);
    newfileContent.append(replacement);
    j = i + toReplace.length();
}
newfileContent.append(fileContent, j, fileContent.length() - j);

// std::cout << "test" << fileContent << std::endl;



newFilename = filename + ".replace";

newFile.open(newFilename.c_str());

newFile << newfileContent;


myFile.close();
newFile.close();
}