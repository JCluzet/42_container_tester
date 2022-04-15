#include "../main.hpp"

int main()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
		v.push_back(i * 4);
	
	// for (vector<int>::const_iterator it = v.begin(); it != v.end(); ++it)
	vector<int>::const_iterator it = v.begin();
	vector<int>::const_iterator ite = v.end();
	while (it != ite){
		std::cout << *it << std::endl;
		it++;
	}

    // std::cout << std::endl;
	return 0;
}