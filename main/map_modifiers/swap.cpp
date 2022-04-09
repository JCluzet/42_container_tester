#include "../main.hpp"

int main()
{
    map<int, int> m1;
    m1.insert(pair<int, int>(1, 1));
    m1.insert(pair<int, int>(2, 4));

    map<int, int> m2;
    m2.insert(pair<int, int>(6, 3));
    m2.insert(pair<int, int>(7, 5));
    m2.insert(pair<int, int>(8, 7));

    std::cout << "m1: ";
    std::cout << m1[1];
    std::cout << m1[2];
    std::cout << std::endl << "m2: ";
    std::cout << m2[6];
    std::cout << m2[7];
    std::cout << m2[8];

    m1.swap(m2);
    std::cout << std::endl << "        > m1.swap(m2) ";
    std::cout << std::endl << "m1: ";
    std::cout << m1[1];
    std::cout << m1[2];
    std::cout << std::endl << "m2: ";
    std::cout << m2[6];
    std::cout << m2[7];
    std::cout << m2[8];


    // use of erase function
}