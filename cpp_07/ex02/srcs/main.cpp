#include "../includes/Array.hpp"

#define MAX_VAL 750

int main(int, char**)
{
    std::cout << "======PERSONNAL MAIN======" << std::endl;
    /*---------PERSONNAL MAIN---------*/

    Array<int> emptyArray;
    std::cout << "Size of empty array: " << emptyArray.size() << std::endl;

    Array<int> simpleArray(3);
    simpleArray[0] = 10;
    simpleArray[1] = 20;
    simpleArray[2] = 30;
    std::cout << "data in simpleArray: ";
    for (unsigned int i = 0; i < simpleArray.size(); ++i)
        std::cout << simpleArray[i] << " ";
    std::cout << std::endl;

    Array<int> copyArray = simpleArray;
    copyArray[0] = 100;
    std::cout << "simpleArray[0]: " << simpleArray[0] << ", copyArray[0]: " << copyArray[0] << std::endl;

    Array<std::string> stringArray(2);
    stringArray[0] = "Hello";
    stringArray[1] = "World";
    std::cout << "data in stringArray: ";
    for (unsigned int i = 0; i < stringArray.size(); ++i)
        std::cout << stringArray[i] << " ";
    std::cout << std::endl;

std::cout<<"======SUBJECT MAIN======"<<std::endl;
/*---------SUBJECT MAIN---------*/    

    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}