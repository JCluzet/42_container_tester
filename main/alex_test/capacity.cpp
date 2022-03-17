#include "../main.hpp"

int main()
{
    std::cout << ftname("capacity") << std::endl;
	vector<int> j;
	std::cout << vecToS(j, "j", j.capacity()) << std::endl;
	j.push_back(1);
	std::cout << "j.push_back(1)" << std::endl;
	std::cout << vecToS(j, "j", j.capacity()) << std::endl;
	std::cout << std::endl;
}