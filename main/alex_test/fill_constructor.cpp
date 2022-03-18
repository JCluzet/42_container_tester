#include "../main.hpp"


int main()
{
    vector<int> c(10, 2);
    print_vec(c);
    std::cout << c.capacity() << std::endl;
	std::cout << std::endl;
}