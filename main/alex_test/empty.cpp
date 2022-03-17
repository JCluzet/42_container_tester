#include "../main.hpp"

int main()
{	std::cout << ftname("empty") << std::endl;
	vector<int> k;
    std::cout << vecToS(k, "k") << " is " << (k.empty()? " empty" : "not empty") << std::endl;
    k.push_back(0);
	std::cout << "k.push_back(0)" << std::endl;
    std::cout << vecToS(k, "k") << " is " << (k.empty()? " empty" : "not empty") << std::endl;
    k.pop_back();
	std::cout << "k.pop_back()" << std::endl;
    std::cout << vecToS(k, "k") << " is " << (k.empty()? " empty" : "not empty") << std::endl;
	std::cout << std::endl;
    }