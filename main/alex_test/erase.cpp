#include "../main.hpp"

int main()
{
    std::cout << ftname("erase") << std::endl;
	vector<int> r;
	for (int i = 0; i < 10; i++)
		r.push_back(i);
	std::cout << vecToS(r, "r", r.capacity()) << std::endl;
	std::cout << "r.erase(r.begin() + 3) = " << std::to_string(*(r.erase(r.begin() + 3))) << std::endl;
	std::cout << vecToS(r, "r", r.capacity()) << std::endl;
	std::cout << "r.erase(r.end() - 1) = " << std::to_string(*(r.erase(r.end() - 1))) << std::endl;
	std::cout << vecToS(r, "r", r.capacity()) << std::endl;
	std::cout << "r.erase(r.begin() + 3, r.begin() + 6) = " << std::to_string(*(r.erase(r.begin()+3,r.begin()+6))) << std::endl;
	std::cout << vecToS(r, "r", r.capacity()) << std::endl;
}