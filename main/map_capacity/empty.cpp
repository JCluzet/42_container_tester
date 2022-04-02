#include "../main.hpp"

int main()
{
    map<int, int> m1;
    std::cout << "empty: " << m1.empty() << std::endl;
    m1.insert(pair<int, int>(1, 1));
    std::cout << "empty: " << m1.empty() << std::endl;
    // std::cout << m2[4] << std::endl;
    return(0);
}