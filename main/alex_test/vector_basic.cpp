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

void	vector_basiques(){
	#define VECTYPE char
	//CONSTRUCTORS
	vector<VECTYPE> v1;
	vector<VECTYPE> v2(4, 97);
	v1 = v2;
	vector<VECTYPE> v3(v1.begin(),v1.end());
	vector<VECTYPE> v4(v3);
	printVec(v4);
	//ELEMENT ACCESS
	v4[1] = 65 + 1;
	v4.at(2) = 65 + 2;
	v4.front() = 65 + 0;
	v4.back() = 65 + 3;
	//ITERATORS
	printVec(v4);
	for (vector<VECTYPE>::reverse_iterator it = v4.rbegin(); it != v4.rend(); it++)
		*it += 2;
	//CAPACITY
	printVec(v4);
	std::cout << v4.max_size() << std::endl;
	v4.resize(6, 70);
	std::cout << v4.capacity() << std::endl;
	std::cout << v4.empty() << std::endl;
	v4.reserve(9);
	std::cout << v4.capacity() << std::endl;
	v4.push_back(72);
	v4.push_back(72);
	v4.push_back(72);
	v4.push_back(72);
	std::cout << v4.capacity() << std::endl;
	//MODIFIERS
	v4.clear();
	v3.clear();
	std::cout << v3.empty() << std::endl;
	for (vector<VECTYPE>::size_type i = 0; i < 7; i++){
		v4.insert(v4.begin() + i, 'a' + i);
		v3.insert(v3.begin() + i, 'A' + i);
	}
	v3.insert(v3.begin()+3, 2, 'X');
	v3.insert(v3.begin()+4, v4.begin(), v4.end());
	printVec(v3);
	v3.swap(v4);
	printVec(v3);
	printVec(v4);
	std::cout << *(v4.erase(v4.begin() + 4)) << std::endl;
	std::cout << *(v4.erase(v4.end() - 4, v4.end() - 2)) << std::endl;
	printVec(v4);
	//SURCHARGE
	std::cout << (v3 == v4) << (v3 != v4) << (v3 <= v4) << (v3 < v4) << (v3 >= v4) << (v3 > v4) << std::endl;
}

int		main()
{
	vector_basiques();
	return 1;
}