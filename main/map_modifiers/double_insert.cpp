#include "../main.hpp"

int main()
{
    map<int, int> m;
    m.insert(pair<int, int>(1, 1));
    m.insert(pair<int, int>(2, 1));
    m.insert(pair<int, int>(1, 3));

    for (map<int,int>::iterator it = m.begin(); it != m.end(); ++it)
    {
        std::cout << (*it).first << " " << (*it).second << std::endl;
    }

    std::cout << (m.size() == 2) << std::endl; 
}