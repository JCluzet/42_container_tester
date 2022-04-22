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
	// mymap['f']=60;
	// mymap['g']=70;

	it=mymap.find('e');
	it=mymap.find('f');
    mymap.erase ('a');                   // erasing by iterator
    mymap.erase ('c');
    mymap.erase ('b');
    mymap.erase ('b');                   // erasing by iterator
	for (it=mymap.begin(); it!=mymap.end(); ++it)
		std::cout << it->first << " => " << it->second << '\n';
    std::cout << std::endl;    


	std::string s = "01002002221001010210201201021020110210210210";
	for (unsigned int i = 0; i < s.size(); i++)
	{
		if (s[i] == '2')
		{
			mymap.erase (s[i]);
		}
		else
		{
			mymap.insert (pair<char, int>(s[i], i));
		}
	for (it=mymap.begin(); it!=mymap.end(); ++it)
		std::cout << it->first << " => " << it->second << '\n';
	}
    mymap.erase ('g');                   // erasing by iterator
    mymap.erase ('a');                   // erasing by iterator

	for (it=mymap.begin(); it!=mymap.end(); ++it)
		std::cout << it->first << " => " << it->second << '\n';
    std::cout << std::endl;

	// mymap.erase('c');                  // erasing by key

	it=mymap.find ('e');
	mymap.erase ( it, mymap.end() );    // erasing by range

	// show content:
	// for (it=mymap.begin(); it!=mymap.end(); ++it)
		// std::cout << it->first << " => " << it->second << '\n';
    // for (map<char, int>::size_type i = 0; i < mymap.size(); i++)
    //     std::cout << mymap[i] << " => " << mymap[i] << '\n';
    std::cout << std::endl;
	return 0;
}
















// #include "../main.hpp"


// int main ()
// {
// 	map<char,int> mymap;
// 	map<char,int>::iterator it;

// 	// insert some values:
// 	mymap['a']=10;
// 	mymap['b']=20;
// 	mymap['c']=30;
// 	mymap['d']=40;
// 	mymap['e']=50;
// 	mymap['f']=60;

// 	it=mymap.find('b');
//     mymap.erase (it);                   // erasing by iterator

// 	mymap.erase('e');                  // erasing by key

// 	// it=mymap.find ('e');
// 	// mymap.erase ( it, mymap.end() );    // erasing by range

// 	// show content:
// 	for (it=mymap.begin(); it!=mymap.end(); ++it)
// 		std::cout << it->first << " => " << it->second << '\n';
// 	// std::cout << it->first << " => " << it->second << '\n';

// 	return 0;
// }

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