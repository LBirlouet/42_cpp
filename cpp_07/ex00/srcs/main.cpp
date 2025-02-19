#include "../includes/whatever.hpp"

int main(){
    int i = 10;
    int j = 20;
    char aa = 'a';
    char bb = 'b';

/* WHIT INT */
    std::cout << "---------------" << std::endl;
    std::cout << "---WHIT INT----" << std::endl;
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

/* WHIT CHAR */

    std::cout << "---------------" << std::endl;
    std::cout << "---WHIT CHAR---" << std::endl;
    std::cout << "---------------" << std::endl;
    std::cout << "MIN : " << min(aa,bb) << std::endl;
    std::cout << "MAX : " << max(aa,bb) << std::endl;
    std::cout << "---------------" << std::endl;
    std::cout << "Before swap :" << std::endl;
    std::cout << "I : " << aa << std::endl;
    std::cout << "J : " << bb << std::endl;
    std::cout << "---------------" << std::endl;

    ::swap(aa,bb);

    std::cout << "After swap :" << std::endl;
    std::cout << "A : " << aa << std::endl;
    std::cout << "B : " << bb << std::endl;

/* SUBJECT MAIN */


    std::cout << "---------------" << std::endl << std ::endl;
    std::cout << "-SUBJECT MAIN--" << std::endl;
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