#include <fstream>
#include <iostream>
#include <sstream>

int main(int ac, char **av){
    std::ifstream myFile;
    std::ofstream newFile;
    std::string filename;
    std::string newFilename;
    std::string toReplace;
    std::string replacement;

    std::stringstream buffer;
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

    
    buffer << myFile.rdbuf();
    fileContent = buffer.str();

    if (toReplace.length() > 0 && replacement.length() > 0){
    while ((i = fileContent.find(toReplace, j)) != std::string::npos){
        newfileContent.append(fileContent, j, i - j);
        newfileContent.append(replacement);
        j = i + toReplace.length();
    }
    newfileContent.append(fileContent, j, fileContent.length() - j);
    }

    newFilename = filename + ".replace";

    newFile.open(newFilename.c_str());

    if (newfileContent.length() > 0)
        newFile << newfileContent;
    else
    {
        std::cout<<"test" << fileContent <<std::endl;
        newFile << fileContent;
    }

    myFile.close();
    newFile.close();
}