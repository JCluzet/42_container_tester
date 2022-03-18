#include "../main.hpp"

int main()
{
	vector<int> o;
	for (int ii = 0; ii < 203; ii++) {
		o.push_back(ii);
		// std::cout << "o.push_back(1)" << std::endl;
		print_vec(o);
	}
	std::cout << std::endl;
}