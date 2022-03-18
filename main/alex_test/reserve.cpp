#include "../main.hpp"

int main()
{
    vector<int> l(10, 4);
	print_vec(l);
    l.reserve(5);
    std::cout << "l.reserve(5)" << std::endl;
	print_vec(l);
    l.reserve(35);
    std::cout << "l.reserve(35)" << std::endl;
	print_vec(l);
	std::cout << std::endl;
}