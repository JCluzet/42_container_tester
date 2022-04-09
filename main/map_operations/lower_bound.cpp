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

    // test lower_bound function
    map<int, int>::iterator it = m1.lower_bound(0);
    return(0);
}