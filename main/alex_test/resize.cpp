#include "../main.hpp"

int main()
{
    vector<int>i (5,1);
    print_vec(i);
    i.resize(3,2);
	std::cout << "i.resize(3,2)" << std::endl;
    print_vec(i);
    i.resize(12,2);
	std::cout << "i.resize(12,2)" << std::endl;
    print_vec(i);
	std::cout << std::endl;
}