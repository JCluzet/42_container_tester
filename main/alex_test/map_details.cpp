#include "../main.hpp"

#include <list>
#include <deque>
#include <iostream>
#include <ctime>
#include <stack>
#include <vector>
#include <map>

template <class T>
void	printVec(vector<T> v){
	std::string r = "";
	for (typename vector<T>::size_type i = 0; i < v.size(); i++){
		r += (i == 0 ? "" : " ");
		r += v[i];
	}
	std::cout << r << "; s" << v.size() << "; c" << v.capacity() << std::endl;
}

template <class K, class V>
void	printMap(map<K, V> m){
	std::string r = "";
	for (typename map<K,V>::iterator it = m.begin(); it != m.end(); it++){
		r += std::to_string((*it).first);
		r += ":";
		r += std::to_string((*it).second);
		r += " ";
	}
	// std::cout << "NIP: " << std::endl;
	std::cout << r << std::endl;
	// std::cout << "YIP: " << std::endl;
}

void	map_en_details(){
	#define AK int
	#define AM char
	map<AK,AM>m;
	for (int i = 0; i < 7; i++){
		m[i*5] = 'a' + i;
	}
	m.insert(make_pair(15, 'z'));
	m.insert(make_pair(25, 'y'));
	m[10] = 'G';
	m.insert(make_pair(-10, 'z'));
	printMap(m);
	map<AK,AM>::reverse_iterator it = m.rbegin();
	it++;
	it++;
	std::cout << m.size() << std::endl;
	std::cout << it->first << std::endl;
	m.insert(make_pair(3, '$'));
	printMap(m);
	std::cout << it->first << std::endl;
	// std::cout << "HERE";
	m.erase('3');
	printMap(m);
	std::cout << it->first << std::endl;
	map<AK,AM> n;
	for (int i = 0; i < 4; i++){
		n[i*3] = 'A' + i;
	}
	map<AK,AM>::iterator it2 = n.begin();
	n.swap(m);
	std::cout << it2->first << std::endl;
	printMap(m);
	printMap(n);
}


int		main()
{
	map_en_details();
	return 1;
}