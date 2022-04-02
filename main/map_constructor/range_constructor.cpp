#include "../main.hpp"

int main()
{
    // use of range constructor to create a map
    map<int, int> m1;
    m1.insert(pair<int, int>(1, 1));
    m1.insert(pair<int, int>(2, 4));
    // int r = 0;
    
    // use of range constructor to create a map
    map<int, int> m2(m1.begin(), m1.end());
    m2.insert(pair<int, int>(3, 9));
    m2.insert(pair<int, int>(4, 16));
    std::cout << m2[3] << std::endl;
    std::cout << m2[4] << std::endl;
    std::cout << m2[1] << std::endl;
    std::cout << m2[2] << std::endl;

}