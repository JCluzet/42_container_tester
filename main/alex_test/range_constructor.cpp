#include "../main.hpp"


int main()
{
	std::cout << ftname("range_constructor") << std::endl;
    vector<int> d;
    for (size_t i = 0; i < 20; i++)
        d.push_back(i);
	std::cout << vecToS(d, "d") << std::endl;
    vector<int> e(d.begin(), d.end());
	std::cout << "vector e(d.begin(), d.end())" << std::endl << vecToS(e, "d") << std::endl;
	std::cout << std::endl;
}