#include "../main.hpp"

int main()
{
	std::cout << ftname("pop_back") << std::endl;
	vector<int> p(3, 5);
	for (size_t i = 0; i < p.size(); i++) {
		p.pop_back();
		std::cout << "p.pop_back()" << std::endl;
		std::cout << vecToS(p, "p", p.capacity()) << std::endl;
	}
	std::cout << std::endl;
}