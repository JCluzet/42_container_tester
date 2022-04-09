#include "../main.hpp"

int main()
{
    map<int, int> m1;

    unsigned int i = 1;

    while ( i < 500 )
    {
        m1.insert(pair<int, int>(i*5, i*5));
        i++;
    }

    // test lower_bound function
    map<int, int>::iterator it = m1.lower_bound(m1.find(i * 5 * 324)->first);
    it = m1.lower_bound(m1.lower_bound(m1.find(i * 5 * 48)->first)->first);
    std::cout << it->second << std::endl;
    return(0);
}