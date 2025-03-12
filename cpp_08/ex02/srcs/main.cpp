#include "../includes/MutantStack.hpp"

int main()
{
    /*---------SUBJECT MAIN---------*/
    std::cout << std::endl << "----- Subject Test -----" << std::endl;
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    std::stack<int> s(mstack);

    /*---------PERSONNAL MAIN---------*/
    std::cout << std::endl << "----- Personnal Test -----" << std::endl;
    MutantStack<int>::reverse_iterator rit = mstack.rbegin();
    MutantStack<int>::reverse_iterator rite = mstack.rend();
    std::cout << "Reverse iteration: ";
    while (rit != rite) {
        std::cout << *rit << " ";
        ++rit;
    }
    std::cout << std::endl;

    std::cout << std::endl << "----- List Comparison Test -----" << std::endl;
    std::list<int> lst;
    lst.push_back(5);
    lst.push_back(17);
    lst.pop_back();
    lst.push_back(3);
    lst.push_back(5);
    lst.push_back(737);
    lst.push_back(0);

    std::cout << "List contents: ";
    for (std::list<int>::iterator lit = lst.begin(); lit != lst.end(); ++lit)
        std::cout << *lit << " ";
    std::cout << std::endl;



}