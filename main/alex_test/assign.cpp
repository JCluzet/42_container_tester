#include "../main.hpp"

int main()
{
	vector<int> m(10, 1);
	print_vec(m);
	m.assign(5, 2);
	std::cout << "m.assign(5, 2)" << std::endl;
	print_vec(m);
	m.assign(15, 4);
	std::cout << "m.assign(15, 4)" << std::endl;
	print_vec(m);
	vector<int> n(12, 1);
	print_vec(m);
	n.assign(m.begin(), m.begin() + 4);
	std::cout << "n.assign(m.begin(), m.begin() + 4)" << std::endl;
	print_vec(m);
	std::cout << std::endl;
}