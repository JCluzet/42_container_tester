#include "../main.hpp"

int     main(){
map<int, int> m;
m.insert(pair<int, int>(1, 1));   // first constructor of insert
m.insert(pair<int, int>(3, 3));
int r = 0;
srand (time(NULL));
for (int i = 0; i < 100; i++){
    r = i;
    m.insert(pair<int, int>(r, r));
    std::cout << m[r] << std::endl;
}

// use of second constructor with iterator
m.insert(m.begin(), pair<int, int>(2, 4));
std::cout << m[2] << std::endl;
std::cout << m[1] << std::endl;
std::cout << m[3] << std::endl;
}