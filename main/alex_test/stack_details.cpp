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

void	stack_en_details(){
	#define S int
	stack<S, std::deque<S> > a;
	stack<S, std::list<S> > b;
	for (int i = 0; i < 5; i++){
		a.push(i*1);
		b.push(i*2);
	}
	for (int i = 0; i < 5; i++){
		std::cout << a.top();
		std::cout << b.top();
		std::cout << std::endl;
		a.pop();
		b.pop();
	}
}

int		main()
{
	stack_en_details();
	return 1;
}