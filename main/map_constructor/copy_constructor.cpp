#include "../main.hpp"

int main()
{
    map<int, int> m1;
    m1.insert(pair<int, int>(1, 1));
    m1.insert(pair<int, int>(2, 4));
    
    // use of copy constructor
    map<int, int> m2(m1);
    m2.insert(pair<int, int>(3, 9));
    std::cout << m2[3] << std::endl;
    std::cout << m2[1] << std::endl;
    std::cout << m2[2] << std::endl;
    // std::cout << m2[4] << std::endl;
    return(0);
}