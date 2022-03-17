#include "../main.hpp"

int main()
{
	std::cout << ftname("insert") << std::endl;
	vector<int> q(3, 0);
	std::cout << vecToS(q, "q", q.capacity()) << std::endl;
	std::cout << "*(q.insert(q.begin(), 4)) = " << std::to_string(*(q.insert(q.begin(), 1))) << std::endl;
	std::cout << vecToS(q, "q", q.capacity()) << std::endl;
	std::cout << "q.insert(q.begin() + 2, 2, 2)" << std::endl;
	q.insert(q.begin() + 2, 2, 2);
	std::cout << vecToS(q, "q", q.capacity()) << std::endl;
	std::cout << "q.insert(q.end(), 2, 2)" << std::endl;
	q.insert(q.end(), q.begin(), q.end());
	std::cout << vecToS(q, "q", q.capacity()) << std::endl;
	std::cout << std::endl;
}