#include "../includes/Serialize.hpp"

// default constructor (Orthodox Canonical Form)
Serializer::Serializer(){
    std::cout<<"[Serializer] default constructor called" <<std::endl;
}

// copy constructor (Orthodox Canonical Form)
Serializer::Serializer(const Serializer& cp){
    std::cout<<"[Serializer] Copy constructor called"<<std::endl;
    *this = cp;
}

// assignment operator (Orthodox Canonical Form)
Serializer& Serializer::operator=(const Serializer& cp){
	(void)cp;
    std::cout << "[Bureaucrat] Copy assignment operator called" << std::endl;
	return *this;
}

// default destructor (Orthodox Canonical Form)
Serializer::~Serializer(void){
    std::cout<<"[Serializer] default destructor called" <<std::endl;
}


// Serializer a pointer Data in uintptr_t
uintptr_t Serializer::serialize(Data* ptr){
    return (reinterpret_cast<uintptr_t>(ptr));
}

// deserialize a uintptr_t in Data pointer
Serializer::Data* Serializer::deserialize(uintptr_t raw){
    return (reinterpret_cast<Data*>(raw));
}