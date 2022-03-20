#include "../main.hpp"
#include <iostream>
#include <iomanip>

int main()
{
	vector<int> r;
	for (int i = 0; i < 10; i++)
		r.push_back(i);
	print_vec(r);
	std::cout << "r.erase(r.begin() + 3) = " << std::to_string(*(r.erase(r.begin() + 3))) << std::endl;
	print_vec(r);
	std::cout << "r.erase(r.end() - 1) = " << std::to_string(*(r.erase(r.end() - 1))) << std::endl;
	print_vec(r);
	//std::cout << "r.erase(r.begin() + 3, r.begin() + 6) = " << std::to_string(*(r.erase(r.begin()+3,r.begin()+6))) << std::endl;
	print_vec(r);
}