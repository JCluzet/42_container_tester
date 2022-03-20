/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reserve.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 01:41:50 by jcluzet           #+#    #+#             */
/*   Updated: 2022/03/20 12:30:42 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.hpp"

int main()
{
    vector<int> s1;
    std::cout << "empty: " << s1.empty() << std::endl;
    s1.push_back(1);
    s1.push_back(2);
    s1.push_back(212121);
    print_vec(s1);

    // reserve
    s1.reserve(10);
    print_vec(s1);

    s1.push_back(1);
    s1.push_back(2);
    s1.push_back(212121);

    s1.reserve(12);
    std::cout << "size: " << s1.size() << std::endl;
    std::cout << "capacity: " << s1.capacity() << std::endl;
    s1.reserve(16);
    std::cout << "size: " << s1.size() << std::endl;
    std::cout << "capacity: " << s1.capacity() << std::endl;
    vector<int> l(10, 4);
	print_vec(l);
    l.reserve(5);
    std::cout << "l.reserve(5)" << std::endl;
	print_vec(l);
    l.reserve(35);
    std::cout << "l.reserve(35)" << std::endl;
	print_vec(l);
	std::cout << std::endl;
}