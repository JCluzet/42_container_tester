#include "../main.hpp"

int main()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
		v.push_back(i * 4);

	std::string s = "0101010001111010101010101001010111101";

	for (unsigned int i = 0; i < s.size(); i++)
	{
		if (s[i] == '1')
			v.push_back(i);
		if (s[i] == '0')
			v.pop_back();
	}
	
	// for (vector<int>::const_iterator it = v.begin(); it != v.end(); ++it)
	vector<int>::const_reverse_iterator it = v.rbegin();
	vector<int>::const_reverse_iterator ite = v.rend();
	while (it != ite){
		std::cout << (*(it)) << std::endl;
		it++;
	}

	return 0;
}