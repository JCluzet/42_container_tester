#include "../main.hpp"


void output_map(map<int, int> &m)
{
    std::cout << "size:" << m.size() << "   ";
    map<int,int>::iterator it = m.begin();
    for (unsigned int i = 0; i < m.size(); i++)
    {
        std::cout << (*it).first << "::" << (*it).second << " ";
        ++it;
    }
    std::cout << std::endl;
}

int main()
{
    map<int, int> m1;
    m1.insert(pair<int, int>(1, 1));
    m1.insert(pair<int, int>(2, 4));
    output_map(m1);

    // use of erase function
    m1.erase(m1.begin());

    output_map(m1);

    m1.erase(m1.begin()); 

    output_map(m1);
    

    // std::cout << m2[4] << std::endl;
    return(0);
}