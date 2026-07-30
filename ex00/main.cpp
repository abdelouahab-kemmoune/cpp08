#include "easyfind.hpp"

int main() {
    try
    {
        std::vector<int> vec;
        vec.push_back(10);
        vec.push_back(20);
        vec.push_back(42);

        std::vector<int>::iterator it = easyfind(vec, 42);

        std::cout << "Found in vector: " << *it << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        std::list<int> lst;
        lst.push_back(1);
        lst.push_back(2);
        lst.push_back(3);

        std::list<int>::iterator it = easyfind(lst, 2);

        std::cout << "Found in list: " << *it << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        std::deque<int> deq;
        deq.push_back(5);
        deq.push_back(6);
        deq.push_back(4);

        std::deque<int>::iterator it = easyfind(deq, 7);

        std::cout << "Found in deque: " << *it << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}