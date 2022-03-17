#include "../main.hpp"


int main()
{
	std::cout << ftname("fill_constructor") << std::endl;
    vector<int> c(10, 2);
    std::cout << "vector c(10, 2)" << std::endl <<vecToS(c, "c", c.capacity()) << std::endl;
	std::cout << std::endl;
}