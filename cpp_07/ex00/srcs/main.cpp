#include "../includes/whatever.hpp"

int main(){
    int i = 10;
    int j = 20;

    std::cout << "---------------" << std::endl;
    std::cout << "MIN : " << min(i,j) << std::endl;
    std::cout << "MAX : " << max(i,j) << std::endl;
    std::cout << "---------------" << std::endl;
    std::cout << "Before swap :" << std::endl;
    std::cout << "I : " << i << std::endl;
    std::cout << "J : " << j << std::endl;
    std::cout << "---------------" << std::endl;

    ::swap(i,j);

    std::cout << "After swap :" << std::endl;
    std::cout << "I : " << i << std::endl;
    std::cout << "J : " << j << std::endl;
    std::cout << "---------------" << std::endl << std ::endl;
    std::cout << "SUBJECT MAIN" << std::endl;
    std::cout << "---------------" << std::endl;

    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    return 0;
}