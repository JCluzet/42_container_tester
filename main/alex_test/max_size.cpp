#include "../main.hpp"


int main()
{
    std::cout << ftname("max_size")  << std::endl;
    vector<bool> v01;
    vector<char> v02;
    vector<char16_t> v03;
    vector<char32_t> v04;
    vector<wchar_t> v05;
    vector<signed char> v06;
    vector<short int> v07;
    vector<int> v08;
    vector<long int> v09;
    vector<long long int> v10;
    vector<unsigned char> v11;
    vector<unsigned short int> v12;
    vector<unsigned int> v13;
    vector<unsigned long int> v14;
    vector<unsigned long long int> v15;
    std::cout << v01.max_size() << std::endl;
    std::cout << v02.max_size() << std::endl;
    std::cout << v03.max_size() << std::endl;
    std::cout << v04.max_size() << std::endl;
    std::cout << v05.max_size() << std::endl;
    std::cout << v06.max_size() << std::endl;
    std::cout << v07.max_size() << std::endl;
    std::cout << v08.max_size() << std::endl;
    std::cout << v09.max_size() << std::endl;
    std::cout << v10.max_size() << std::endl;
    std::cout << v11.max_size() << std::endl;
    std::cout << v12.max_size() << std::endl;
    std::cout << v13.max_size() << std::endl;
    std::cout << v14.max_size() << std::endl;
    std::cout << v15.max_size() << std::endl;
	std::cout << std::endl;
}