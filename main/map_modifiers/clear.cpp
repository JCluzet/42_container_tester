#include "../main.hpp"

int main()
{
    map<int, int> m1;

    unsigned int i = 0;

    while ( i < 500 )
    {
        m1.insert(pair<int, int>(i, i));
        i++;
    }

    // test clear
    std::cout << "size " << m1.size() << std::endl;
    m1.clear();
    std::cout << "size " << m1.size() << std::endl;
    std::cout << m1[0] << std::endl;
    std::cout << m1[1] << std::endl;

    return(0);
}