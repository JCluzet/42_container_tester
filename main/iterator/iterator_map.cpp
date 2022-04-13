#include "../main.hpp"

int main ()
{
	map<char,int> mymap;

	// mymap['x']=100;
	// mymap['y']=200;

	std::cout << "begin() == end() ? " << (mymap.begin() == mymap.end()) << std::endl;
    mymap['z']=300;
    std::cout << "begin() == end() ? " << (mymap.begin() == mymap.end()) << std::endl;
    // mymap.erase(mymap.begin());
    std::cout << "begin() == end() ? " << (mymap.begin() == mymap.end()) << std::endl << std::endl;
    map<char, int> mymap2(mymap);
    std::cout << "begin() == end() ? " << (mymap2.begin() == mymap2.end()) << std::endl;
    mymap.insert(pair<char, int>('a', 1));
    mymap.insert(pair<char, int>('b', 2));
    std::cout << "begin() == end() ? " << (mymap.begin() == mymap.end()) << std::endl;
    mymap.clear();
    std::cout << "begin() == end() ? " << (mymap.begin() == mymap.end()) << std::endl;
    


	return 0;
}