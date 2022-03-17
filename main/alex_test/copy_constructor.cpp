#include "../main.hpp"


int main()
{
	std::cout << ftname("copy_constructor") << std::endl;
    vector<int> a;
    for (size_t i = 0; i < 8; i++){
        a.push_back(i);}
	std::cout << vecToS(a, "a", a.capacity()) << std::endl;
    vector<int> b(a);
	std::cout << "vector b(a)" << std::endl << vecToS(b, "b", b.capacity()) << std::endl;
	std::cout << std::endl;
}