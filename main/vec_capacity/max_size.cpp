/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_size.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 01:35:02 by jcluzet           #+#    #+#             */
/*   Updated: 2022/03/27 18:37:43 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.hpp"

int main()
{
    vector<int> s1;
    std::cout << "max_size: " << s1.max_size() << std::endl;
    s1.push_back(1);
    s1.push_back(2);
    s1.push_back(212121);
    std::cout << "max_size: " << s1.max_size() << std::endl;
    s1.clear();
    std::cout << "max_size: " << s1.max_size() << std::endl;
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
    std::cout << "vector<char> v02;" << std::endl;
    std::cout << v02.max_size() << std::endl;
    std::cout << "vector<char16_t> v03;" << std::endl;
    std::cout << v03.max_size() << std::endl;
    std::cout << "vector<char32_t> v04;" << std::endl;
    std::cout << v04.max_size() << std::endl;
    std::cout << "vector<wchar_t> v05;" << std::endl;
    std::cout << v05.max_size() << std::endl;
    std::cout << "vector<signed char> v06;" << std::endl;
    std::cout << v06.max_size() << std::endl;
    std::cout << "vector<short int> v07;" << std::endl;
    std::cout << v07.max_size() << std::endl;
    std::cout << "vector<int> v08;" << std::endl;
    std::cout << v08.max_size() << std::endl;
    std::cout << "vector<long int> v09;" << std::endl;
    std::cout << v09.max_size() << std::endl;
    std::cout << "vector<long long int> v10;" << std::endl;
    std::cout << v10.max_size() << std::endl;
    std::cout << "vector<unsigned char> v11;" << std::endl;
    std::cout << v11.max_size() << std::endl;
    std::cout << "vector<unsigned short int> v12;" << std::endl;
    std::cout << v12.max_size() << std::endl;
    std::cout << "vector<unsigned int> v13;" << std::endl;
    std::cout << v13.max_size() << std::endl;
    std::cout << "vector<unsigned long int> v14;" << std::endl;
    std::cout << v14.max_size() << std::endl;
    std::cout << "vector<unsigned long long int> v15;" << std::endl;
    std::cout << v15.max_size() << std::endl;
	std::cout << std::endl;
    return(0);
}