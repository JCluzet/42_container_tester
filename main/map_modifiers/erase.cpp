#include "../main.hpp"


void output_map(map<int, int> &m)
{
    for (map<int,int>::iterator it = m.begin(); it != m.end(); ++it)
        std::cout << (*it).first << " " << (*it).second;
    std::cout << " size: " << m.size() << std::endl;
}

int main()
{
    map<int, int> m1;
    m1.insert(pair<int, int>(1, 1));
    m1.insert(pair<int, int>(2, 4));

    // use of erase function
    m1.erase(m1.begin());

    output_map(m1);

    // m1.erase(m1.begin());

    

    // std::cout << m2[4] << std::endl;
    return(0);
}