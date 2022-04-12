#include "../main.hpp"


void output_map(map<int, int> &m)
{
    std::cout << "size:" << m.size() << "   ";
    if ( m.size() == 0 )
        return;
    // map<int,int>::iterator it = m.begin();
    for (unsigned int i = 0; i < m.size(); i++)
    {
        std::cout << i << "::" <<  m[i] << " ";
        // std::cout << (*it).first << "::" << (*it).second << " ";
        // ++it;
    }
    std::cout << std::endl;
}

int main()
{
    map<int, int> m1;

    for (int i = 0; i < 10; i++)
        m1.insert(pair<int,int>(i, i));

    output_map(m1);
    // use of erase function
    for (int i = 0; i < 2; i++)
    {
        m1.erase(m1.find(i));
        output_map(m1);
    }
    // m1.erase(m1.begin());

    // output_map(m1);
    

    // std::cout << m2[4] << std::endl;
    return(0);
}