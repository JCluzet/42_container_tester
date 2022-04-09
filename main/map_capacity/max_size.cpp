#include "../main.hpp"

int main()
{
    map<int, int> s1;
    std::cout << "max_size: " << s1.max_size() << std::endl;
    s1[1] = 1;
    s1[2] = 4;
    std::cout << "max_size: " << s1.max_size() << std::endl;
    std::cout << "max_size: " << s1.max_size() << std::endl;
    map<int, char> v02;
    map<int, char16_t> v03;
    map<int, char32_t> v04;
    map<int, wchar_t> v05;
    map<int, signed char> v06;
    map<int, short int> v07;
    map<int, int> v08;
    map<int, long int> v09;
    map<int, long long int> v10;
    map<int, unsigned char> v11;
    map<int, unsigned short int> v12;
    map<int, unsigned int> v13;
    map<int, unsigned long int> v14;
    map<int, unsigned long long int> v15;
    std::cout << "map<int, char> v02;" << std::endl;
    std::cout << v02.max_size() << std::endl;
    std::cout << "map<int, char16_t> v03;" << std::endl;
    std::cout << v03.max_size() << std::endl;
    std::cout << "map<int, char32_t> v04;" << std::endl;
    std::cout << v04.max_size() << std::endl;
    std::cout << "map<int, wchar_t> v05;" << std::endl;
    std::cout << v05.max_size() << std::endl;
    std::cout << "map<int, signed char> v06;" << std::endl;
    std::cout << v06.max_size() << std::endl;
    std::cout << "map<int, short int> v07;" << std::endl;
    std::cout << v07.max_size() << std::endl;
    std::cout << "map<int, int> v08;" << std::endl;
    std::cout << v08.max_size() << std::endl;
    std::cout << "map<int, long int> v09;" << std::endl;
    std::cout << v09.max_size() << std::endl;
    std::cout << "map<int, long long int> v10;" << std::endl;
    std::cout << v10.max_size() << std::endl;
    std::cout << "map<int, unsigned char> v11;" << std::endl;
    std::cout << v11.max_size() << std::endl;
    std::cout << "map<int, unsigned short int> v12;" << std::endl;
    std::cout << v12.max_size() << std::endl;
    std::cout << "map<int, unsigned int> v13;" << std::endl;
    std::cout << v13.max_size() << std::endl;
    std::cout << "map<int, unsigned long int> v14;" << std::endl;
    std::cout << v14.max_size() << std::endl;
    std::cout << "map<int, unsigned long long int> v15;" << std::endl;
    std::cout << v15.max_size() << std::endl;
	std::cout << std::endl;
    return(0);
}