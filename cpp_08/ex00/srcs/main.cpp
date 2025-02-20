#include "../includes/easyfind.hpp"

int main(){
    // Test with std::vector
    int arr[] = {10, 20, 30, 40, 50};
    std::vector<int> vec(arr, arr + 5);

    try {
        std::vector<int>::iterator it = easyfind(vec, 30);
        std::cout << "Found: " << *it << std::endl;
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    // Test with std::list
    int arr2[] = {1, 2, 3, 4, 5};
    std::list<int> lst(arr2, arr2 + 5);

    try {
        std::list<int>::iterator it = easyfind(lst, 6);
        std::cout << "Found: " << *it << std::endl;
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}

