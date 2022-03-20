#include "../main.hpp"

int main(){
    vector<int> v(5,6);
    vector<int> w(4,6);
    print_vec(v);
    print_vec(w);
    std::cout << "v < w ? " << (v < w) << std::endl;
    std::cout << "w < v ? " << (v < w) << std::endl;
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
    std::cout << "v < w ? " << (v < w) << std::endl;
    std::cout << "w < v ? " << (v < w) << std::endl;
    vector<int> x;
    print_vec(v);
    print_vec(x);
    std::cout << "v < x ? " << (v < x) << std::endl;
    std::cout << "x < v ? " << (x < v) << std::endl;
}