#include "../main.hpp"


int main ()
{
	map<char,int> mymap;
	map<char,int>::iterator it;

	// insert some values:
	mymap['a']=10;
	mymap['b']=20;
	mymap['c']=30;
	mymap['d']=40;
	mymap['e']=50;
	mymap['f']=60;

	it=mymap.find('b');
    mymap.erase (it);                   // erasing by iterator

	mymap.erase('e');                  // erasing by key

	// it=mymap.find ('e');
	// mymap.erase ( it, mymap.end() );    // erasing by range

	// show content:
	for (it=mymap.begin(); it!=mymap.end(); ++it)
		std::cout << it->first << " => " << it->second << '\n';
	// std::cout << it->first << " => " << it->second << '\n';

	return 0;
}

// int main ()
// {
// 	map<char,int> mymap;

// 	mymap['x']=100;
// 	mymap['y']=200;
// 	mymap['z']=300;

// 	std::cout << "mymap contains:\n";
// 	for (map<char,int>::iterator it=mymap.begin(); it!=mymap.end(); ++it)
// 		std::cout << it->first << " => " << it->second << '\n';

// 	mymap.clear();
// 	mymap['a']=1101;
// 	mymap['b']=2202;

// 	std::cout << "mymap contains:\n";
// 	for (map<char,int>::iterator it=mymap.begin(); it!=mymap.end(); ++it)
// 		std::cout << it->first << " => " << it->second << '\n';

// 	return 0;
// }