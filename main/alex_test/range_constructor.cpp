#include "../main.hpp"


int main()
{
    vector<int> d;
    for (size_t i = 0; i < 20; i++)
        d.push_back(i);
    std::cout << "d : ";
	print_vec(d);
    vector<int> e(d.begin(), d.end());
    std::cout << "vector<int> e(d.begin(), d.end());" << std::endl;
	std::cout << "e : ";
    print_vec(e);
	std::cout << std::endl;
}