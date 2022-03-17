#include "../main.hpp"

int main() {
vector<int> v;
for (int i = 0; i < 5; i++){
    if (i == 4)
        std::cout << std::endl << std::endl;
    std::cout << "-->" << v.capacity() << "<--" << std::endl;
    std::cout << vecToS(v, "v", v.capacity()) << std::endl;
    v.push_back(i);
    }
    }
