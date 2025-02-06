#include "../includes/Base.hpp"

// virtual destructor
Base::~Base(){
}

// generate a random object (A, B, or C)
Base* generate() {
    int random = rand() % 3;
    if (random == 0)
        return new A();
    else if (random == 1)
        return new B();
    else
        return new C();
}

// identify object pointed by p
void identify(Base* p) {
    if (dynamic_cast<A*>(p)){
        std::cout << "A" << std::endl;
    } else if (dynamic_cast<B*>(p)){
        std::cout << "B" << std::endl;
    } else if (dynamic_cast<C*>(p)){
        std::cout << "C" << std::endl;
    }
}

// identify object referenced by p
void identify(Base& p) {
    if (dynamic_cast<A*>(&p)){
        std::cout << "A" << std::endl;
    } else if (dynamic_cast<B*>(&p)){
        std::cout << "B" << std::endl;
    } else if (dynamic_cast<C*>(&p)){
        std::cout << "C" << std::endl;
    }
}