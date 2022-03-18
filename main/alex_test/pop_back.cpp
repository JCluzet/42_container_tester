#include "../main.hpp"

int main()
{
	vector<int> p(3, 5);
	for (size_t i = 0; i < p.size(); i++) {
		p.pop_back();
		std::cout << "p.pop_back()" << std::endl;
		print_vec(p);
	}
	std::cout << std::endl;
}