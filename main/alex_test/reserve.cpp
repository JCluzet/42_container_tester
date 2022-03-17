#include "../main.hpp"

int main()
{
    std::cout << ftname("reserve") << std::endl;
    vector<int> l(10, 4);
	std::cout << vecToS(l, "l") << std::endl;
    l.reserve(5);
    std::cout << "l.reserve(5)" << std::endl;
	std::cout << vecToS(l, "l") << std::endl;
    l.reserve(35);
    std::cout << "l.reserve(35)" << std::endl;
	std::cout << vecToS(l, "l") << std::endl;
	std::cout << std::endl;
}