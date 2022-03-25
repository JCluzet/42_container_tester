#include "../main.hpp"

int main(){
    vector<int> v(5,6);
    vector<int> w(4,6);
    print_vec(v);
    print_vec(w);
    vector<int>::iterator it1 = v.begin() + 1;
    vector<int>::iterator it2 = w.begin() + 1;
    std::cout << "v.begin() < w.begin() ? " << (it1 < it2) << std::endl;
    std::cout << "w.begin() < v.begin() ? " << (it2 < it1) << std::endl;
    v.clear();
    w.clear();
    for (size_t i = 0; i < 5; i++){
        if (i==4)
            v.push_back(2);
        else
            v.push_back(i);
        w.push_back(i);
    }
    print_vec(v);
    print_vec(w);
    it1 = v.begin() + 1;
    it2 = w.begin() + 1;
    std::cout << "v.begin() < w.begin() ? " << (it1 < it2) << std::endl;
    std::cout << "w.begin() < v.begin() ? " << (it2 < it1) << std::endl;    
    std::cout << "v.begin() < w.begin() ? " << (it1 < it2) << std::endl;
    std::cout << "w.begin() < v.begin() ? " << (it2 < it1) << std::endl;
    vector<int> x;
    print_vec(v);
    print_vec(x);
    it1 = v.begin();
    it2 = x.begin();
    std::cout << "v.begin() < x.begin() ? " << (it1 < it2) << std::endl;
    std::cout << "x.begin() < v.begin() ? " << (it2 < it1) << std::endl;
}