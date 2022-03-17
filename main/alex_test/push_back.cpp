#include "../main.hpp"

int main()
{
    std::cout << ftname("push_back") << std::endl;
	vector<int> o;
	for (int ii = 0; ii < 5; ii++) {
		o.push_back(1);
		std::cout << "o.push_back(1)" << std::endl;
		std::cout << vecToS(o, "o", o.capacity()) << std::endl;
	}
	std::cout << std::endl;
}