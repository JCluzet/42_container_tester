#include "../main.hpp"

int main()
{
	vector<int> k;
    print_vec(k);
    std::cout << "k.empty() = " << k.empty() << std::endl;
    k.push_back(0);
	std::cout << "k.push_back(0)" << std::endl;
    print_vec(k);
    std::cout << k.empty() << std::endl;
    k.pop_back();
	std::cout << "k.pop_back()" << std::endl;
    print_vec(k);
    std::cout << k.empty() << std::endl;
    std::cout << std::endl;
    }