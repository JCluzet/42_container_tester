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

void	vector_en_details(){
	#define ATYPE char
	vector<ATYPE> a;
	for (int i = 0 ; i < 6; i ++)
		a.push_back(i + 'a');
	vector<ATYPE>::iterator it = a.begin() + 1;
	vector<ATYPE>::const_iterator cit = a.begin() + 2;
	std::cout << (it != cit) << std::endl;
	std::cout << (it > cit) << std::endl;
	vector<ATYPE> b;
	for (int i = 0 ; i < 9; i ++)
		b.push_back(i + 'A');
	
	vector<ATYPE>::reference r = a.at(2);
	a.swap(b);
	it++;
	*it = 'Z';
	r = 'X';
	printVec(a);
	printVec(b);
}


int		main()
{
	vector_en_details();
	return 1;
}