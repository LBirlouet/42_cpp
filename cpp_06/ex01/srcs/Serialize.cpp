#include "../includes/Serialize.hpp"

// serialize a pointer Data in uintptr_t
uintptr_t Serializer::serialize(Data* ptr){
    return (reinterpret_cast<uintptr_t>(ptr));
}

// deserialize a uintptr_t in Data pointer
Serializer::Data* Serializer::deserialize(uintptr_t raw){
    return (reinterpret_cast<Data*>(raw));
}