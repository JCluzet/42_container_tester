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

	// test comparison of 2 iterators (const & non-const)
	vector<char> a;
	for (int i = 0 ; i < 6; i ++)
		a.push_back(i + 'a');
	vector<char>::iterator it1 = a.begin() + 1;
	vector<char>::const_iterator cit = a.begin() + 2;
	std::cout << (it1 != cit) << std::endl;
	std::cout << (it1 > cit) << std::endl;

    // std::cout << std::endl;
	return 0;
}