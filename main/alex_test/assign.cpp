#include "../main.hpp"

int main()
{
    	std::cout << ftname("assign") << std::endl;
	vector<int> m(10, 1);
	std::cout << vecToS(m, "m", m.capacity()) << std::endl;
	m.assign(5, 2);
	std::cout << "m.assign(5, 2)" << std::endl;
	std::cout << vecToS(m, "m", m.capacity()) << std::endl;
	m.assign(15, 4);
	std::cout << "m.assign(15, 4)" << std::endl;
	std::cout << vecToS(m, "m", m.capacity()) << std::endl;
	vector<int> n(12, 1);
	std::cout << vecToS(n, "n", n.capacity()) << std::endl;
	n.assign(m.begin(), m.begin() + 4);
	std::cout << "n.assign(m.begin(), m.begin() + 4)" << std::endl;
	std::cout << vecToS(n, "n", n.capacity()) << std::endl;
	std::cout << std::endl;
}