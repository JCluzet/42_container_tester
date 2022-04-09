#include "../main.hpp"

int main()
{
    map<int, int> m;
    m.insert(pair<int, int>(1, 1));
    m.insert(pair<int, int>(3, 3));
    srand(time(NULL));
    std::cout << "first constructor  : ";
    for (int i = 0; i < 100; i++)
    {
        std::cout << (*(m.insert(pair<int, int>(i, i)).first)).second << " "; // test first insert
    }

    std::cout << std::endl;
    std::cout << "second constructor : ";
    for (int i = 0; i < 100; i++)
    {
        std::cout << (*(m.insert(m.begin(), pair<int, int>(i, i)))).second << " "; // test second insert
    }
    std::cout << "second constructor : ";
    m.insert(m.begin(), m.end());            // test third insert
    for (int i = 0; i < 100; i++)
    {
        std::cout << m[i] << " ";
    }
    m.insert(m.begin(), m.end());            // test again third insert
    for (int i = 0; i < 200; i++)
    {
        std::cout << m[i] << " ";
    }
    std::cout << std::endl;
}