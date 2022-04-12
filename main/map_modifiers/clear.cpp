#include "../main.hpp"

int main ()
{
	map<char,int> mymap;

	mymap['x']=100;
	mymap['y']=200;
	mymap['z']=300;

	std::cout << "mymap contains:\n";
	for (map<char,int>::iterator it=mymap.begin(); it!=mymap.end(); ++it)
		std::cout << it->first << " => " << it->second << '\n';

	mymap.clear();
	std::cout << "mymap contains:\n";
	for (map<char,int>::iterator it=mymap.begin(); it!=mymap.end(); ++it)
		std::cout << it->first << " => " << it->second << '\n';
	mymap['a']=1101;
	mymap['b']=2202;

	std::cout << "mymap contains:\n";
	for (map<char,int>::iterator it=mymap.begin(); it!=mymap.end(); ++it)
		std::cout << it->first << " => " << it->second << '\n';

	return 0;
}

// int main()
// {
//     map<int, int> m1;

//     unsigned int i = 0;

//     while ( i < 500 )
//     {
//         m1.insert(pair<int, int>(i, i));
//         i++;
//     }

//     // test clear
//     std::cout << "size " << m1.size() << std::endl;
//     m1.clear();
//     std::cout << "size " << m1.size() << std::endl;
//     std::cout << m1[0] << std::endl;
//     std::cout << m1[1] << std::endl;

//     return(0);
// }