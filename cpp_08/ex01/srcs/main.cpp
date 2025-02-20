#include "../includes/Span.hpp"

int main(){
    /*---------SUBJECT MAIN---------*/
    std::cout << std::endl << "----- Subject Test -----" << std::endl;
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    /*---------PERSONNAL MAIN---------*/
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
