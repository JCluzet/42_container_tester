#include "../main.hpp"

int main()
{
	vector<int> j;
	print_vec(j);
	j.push_back(1);
	std::cout << "j.push_back(1)" << std::endl;
	print_vec(j);
	std::cout << std::endl;
}