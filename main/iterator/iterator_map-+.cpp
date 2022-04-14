#include "../main.hpp"

int main ()
{
	map<int,int> mymap;

	// mymap['x']=100;
	// mymap['y']=200;

    for (unsigned int i = 0; i < 100; i++)
    {
        mymap.insert(pair<int, int>(i, i));
    }

    map<int, int>::iterator it = mymap.begin();
    std::cout << (*it).first;

    it++;
    std::cout << (*it).first;
    it++;
    std::cout << (*it).first;
    it++;
    std::cout << (*it).first;
    it++;
    std::cout << (*it).first;
    it--;
    std::cout << (*it).first;
    it--;
    std::cout << (*it).first;
    it--;
    std::cout << (*it).first;
    it--;
    std::cout << (*it).first;
    // it--;
    // std::cout << (*it).first;
	// std::cout << "begin() == end() ? " << (mymap.begin() == mymap.end()) << std::endl;

    


	return 0;
}