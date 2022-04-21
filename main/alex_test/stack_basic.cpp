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

void	stack_basiques(){
	//member_functions
	stack<char> s1;
	std::cout << s1.size() << std::endl;
	stack<char> d;
	d.push('d');
	d.push('q');
	stack<char> s2 = d;
	s2.push('!');
	for (;!s2.empty(); s2.pop())
		std::cout << s2.top() << std::endl;
	//non_member functions oerloads
	s1.push(';');
	std::cout << (s1 == s2) << std::endl;
	std::cout << (s1 != s2) << std::endl;
	std::cout << (s1 < s2) << std::endl;
	std::cout << (s1 <= s2) << std::endl;
	std::cout << (s1 > s2) << std::endl;
	std::cout << (s1 >= s2) << std::endl;
}

int		main()
{
	stack_basiques();
	return 1;
}