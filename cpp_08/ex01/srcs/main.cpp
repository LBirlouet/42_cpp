#include "../includes/Span.hpp"

int main(){
    try{
        std::cout << "----- Basic Test -----" << std::endl;
        Span sp(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        
        sp.printNumbers();
        
        std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest Span : " << sp.longestSpan() << std::endl;
        
        std::cout << std::endl << "----- Exceeding Capacity Test -----" << std::endl;
        sp.addNumber(42);
        
    } catch (const std::exception& e){
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    try{
        std::cout << std::endl << "----- Empty Span Test -----" << std::endl;
        Span emptySpan(5);
        std::cout << "Shortest Span: " << emptySpan.shortestSpan() << std::endl;  // Exception attendue
    } catch (const std::exception& e){
        std::cerr << "Exception    : " << e.what() << std::endl;
    }

    try{
        std::cout << std::endl << "----- Large Span Test (10,000 numbers) -----" << std::endl;
        Span largeSpan(10000);
        for (int i = 0; i < 10000; i++)
            largeSpan.addNumber(rand());

        std::cout << "Shortest Span: " << largeSpan.shortestSpan() << std::endl;
        std::cout << "Longest Span : " << largeSpan.longestSpan() << std::endl;
    } catch (const std::exception& e){
        std::cerr << "Exception    : " << e.what() << std::endl;
    }
}
