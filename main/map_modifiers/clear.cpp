#include "../main.hpp"

int main ()
{
	map<char,int> mymap;

	// mymap['x']=100;
	// mymap['y']=200;

	std::cout << "mymap contains:\n";
	// mymap['z']=300;
    map<char,int>::iterator it = mymap.begin();

    // std::cout << it->first << std::endl;
    // std::cout << (*(mymap.begin())) << std::endl; 
    std::cout << (it == mymap.end()) << std::endl;

	for (map<char,int>::iterator it=mymap.begin(); it!=mymap.end(); it++)
		std::cout << '3' << std::endl;

	mymap.clear();

    std::cout << "mymap contains:" << std::endl;
    for (map<char,int>::iterator it=mymap.begin(); it!=mymap.end(); it++)
	{
        std::cout << '3' << std::endl;
	}
	// std::cout << "mymap contains:\n";
	// for (map<char,int>::iterator it=mymap.begin(); it!=mymap.end(); ++it)
	// 	std::cout << it->first << " => " << it->second << '\n';
	// mymap['a']=1101;
	// mymap['b']=2202;

	// std::cout << "mymap contains:\n";
	// for (map<char,int>::iterator it=mymap.begin(); it!=mymap.end(); ++it)
	// 	std::cout << it->first << " => " << it->second << '\n';

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