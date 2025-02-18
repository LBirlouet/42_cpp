#include "../includes/Serialize.hpp"

int main() {
    Serializer::Data* data = new Serializer::Data(42, "Test");

    uintptr_t raw = Serializer::serialize(data);
    std::cout << "Serialized address: " << raw << std::endl;

    Serializer::Data* deserializedData = Serializer::deserialize(raw);
    std::cout << "Deserialized address: " << deserializedData << std::endl;

    if (data == deserializedData) {
        std::cout << "\033[1;32mSuccess: The pointers are equal!\033[0m" << std::endl;
    } else {
        std::cout << "\033[1;31mError: The pointers are not equal!\033[0m" << std::endl;
    }

    std::cout << "Address as uintptr_t (Serialized):   " << raw << std::endl;
    std::cout << "Address as uintptr_t (Deserialized): " << reinterpret_cast<uintptr_t>(deserializedData) << std::endl;
    delete data;
}
