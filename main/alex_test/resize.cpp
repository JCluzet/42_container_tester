#include "../main.hpp"

int main()
{	
    std::cout << ftname("resize") << std::endl;
    vector<int>i (5,1);
	std::cout << vecToS(i, "i", i.capacity()) << std::endl;
    i.resize(3,2);
	std::cout << "i.resize(3,2)" << std::endl;
    std::cout  << vecToS(i, "i", i.capacity()) << std::endl;
    i.resize(12,2);
	std::cout << "i.resize(12,2)" << std::endl;
    std::cout  << vecToS(i, "i", i.capacity()) << std::endl;
	std::cout << std::endl;
}