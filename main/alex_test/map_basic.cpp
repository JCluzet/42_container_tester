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
	std::cout << r << std::endl;
}

void	map_basiques(){
	#define K int
	#define M int
//CONSTRUCTORS
	map<K,M> m;
	m[-34] = 1;
	m[0345] = 12;
	m[654] = -24;
	m[234] = 53;
	map<K,M> n(m);
	map<K,M> o = n;
//ITERATORS
	for (map<K,M>::iterator it = m.begin(); it != m.end(); it++)
		it->second = 0;
	for (map<K,M>::const_iterator it = m.begin(); it != m.end(); it++)
		std::cout << it->first << ":" << it->second << " ";
	std::cout << std::endl;
	int i = 9;
	for (map<K,M>::reverse_iterator it = m.rbegin(); it != m.rend(); it++)
		it->second = i++;
	for (map<K,M>::const_reverse_iterator it = m.rbegin(); it != m.rend(); it++)
		std::cout << it->first << ":" << it->second << " ";
	std::cout << std::endl;
//CAPACITY
	std::cout << m.empty() << m.size() << m.max_size() << std::endl;
//ELEMENT_ACCESS
	printMap(m);
	std::cout << m[14];
	printMap(m);
	std::cout << m[229] << std::endl;
//MODIFIERS
	m.insert(make_pair(35,54));
	printMap(m);
	map<K,M>::iterator hh = m.begin();
	hh++;
	m.insert(hh, make_pair(-200,-200));
	m.insert(n.begin(), n.end());
	for (int i = 0; i < 4; i++)
		n.insert(make_pair(i, i));
	m.insert(n.begin(), n.end());
	printMap(m);
	m.erase(m.begin());
	m.erase(1);
	printMap(m);
	m.clear();
	for (int i = 0; i < 12; i++){
		m.insert(make_pair(i*5,i*5));
		n.insert(make_pair(i,i));
	}
	m.swap(n);
	printMap(m);
	printMap(n);
//OPERATIONS
	std::cout << m.find(5)->second << m.count(5) << m.count(43) << std::endl;
	std::cout << m.lower_bound(30)->second << m.upper_bound(30)->second << std::endl;
}

int		main()
{
	map_basiques();
	return 1;
}