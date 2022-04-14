#include "../main.hpp"

int main()
{
    map<int, int> m1;
    m1.insert(pair<int, int>(1, 1));
    m1.insert(pair<int, int>(2, 4));

    map<int, int> m2;
    m2=m1;
    m2.insert(pair<int, int>(3, 9));
    for (int i = 0; i < 4; i++)
    {
        std::cout << m2[i] << std::endl;
    }
}