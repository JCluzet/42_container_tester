#include "../main.hpp"

int main()
{
    map<int, int> m1;
    m1.insert(pair<int, int>(1, 1));
    m1.insert(pair<int, int>(2, 4));

    // use of erase function
    m1.erase(m1.begin());

    std::cout << m1[1] << std::endl;
    std::cout << m1[2] << std::endl;
    

    // std::cout << m2[4] << std::endl;
    return(0);
}