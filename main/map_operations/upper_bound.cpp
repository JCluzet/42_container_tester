#include "../main.hpp"

int main()
{
    map<int, int> m1;

    unsigned int i = 1;

    while ( i < 500 )
    {
        m1.insert(pair<int, int>(i, i*5));
        i++;
    }

    // test lower_bound function
    map<int, int>::iterator it = m1.upper_bound(m1.find(i - 324)->first);
    std::cout << (*it).first << std::endl;
    i = 3;
    it = m1.lower_bound(m1.lower_bound(m1.find(i * 5)->first)->first);
    std::cout << it->second << std::endl;
    return(0);
}