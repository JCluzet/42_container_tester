#include "../main.hpp"

int main(){
    vector<int>v(4,6);
    vector<int>::iterator i(v.begin());
    std::cout << *i << std::endl;
    vector<int>::iterator j(i);
    std::cout << *j << std::endl;
    vector<int>::iterator k = i;
    std::cout << *k << std::endl;
    while(v.size())
        v.pop_back();
    i = v.begin();
    std::cout << *i << std::endl;
}