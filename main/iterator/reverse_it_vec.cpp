#include "../main.hpp"

int main()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
		v.push_back(3);
	
	// for (vector<int>::const_iterator it = v.begin(); it != v.end(); ++it)
	vector<int>::reverse_iterator it = v.rbegin();
	vector<int>::reverse_iterator ite = v.rend();
	while (it != ite){
		std::cout << *it << std::endl;
		it++;
	}

    // std::cout << std::endl;
	return 0;
}