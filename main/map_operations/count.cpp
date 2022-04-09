#include "../main.hpp"

int main()
{
    map<int, int> m1;
    m1.insert(pair<int, int>(1, 1));
    m1.insert(pair<int, int>(2, 4));
    
    // use of count function

    std::cout << m1.count(1) << std::endl;
    std::cout << m1.count(0) << std::endl;
    std::cout << m1.count(2) << std::endl;
    std::cout << m1.count(3) << std::endl;
    return(0);
}