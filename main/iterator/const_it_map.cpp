#include "../main.hpp"

int main()
{
	map<int, int> v;
	for (int i = 0; i < 10; i++)
		v.insert(pair<int, int>(i * 4, i));
	
	// for (vector<int>::const_iterator it = v.begin(); it != v.end(); ++it)
	map<int, int>::const_iterator it = v.begin();
	map<int, int>::const_iterator ite = v.end();
	while (it != ite){
		std::cout << (*(it)).first << std::endl;
		it++;
	}

    // std::cout << std::endl;
	return 0;
}