#include "../main.hpp"

int main()
{
	vector<int> o(4,4);
	vector<int> q(3, 0);
	print_vec(q);
	std::cout << "*(q.insert(q.begin(), 4)) = " << std::to_string(*(q.insert(q.begin(), 1))) << std::endl;
	print_vec(q);
	std::cout << "q.insert(q.begin() + 2, 2, 2)" << std::endl;
	q.insert(q.begin() + 2, 2, 2);
	print_vec(q);
	std::cout << "q.insert(q.end(), 2, 2)" << std::endl;
	// testing insert(iterator position, InputIterator first, InputIterator last)
	q.insert(q.end(), o.begin(), o.end());
	print_vec(q);
	std::cout << std::endl;
}