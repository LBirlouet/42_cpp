#include "../includes/Base.hpp"

int main() {
    srand(time(0));

    Base* base = generate();

    std::cout << "Identify with pointer: ";
    identify(base);

    std::cout << "Identify with reference: ";
    identify(*base);
    delete base;
}
