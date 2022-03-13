/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   capacity.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 01:38:12 by jcluzet           #+#    #+#             */
/*   Updated: 2022/03/13 14:27:27 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.hpp"

int main()
{
    vector<int> s1;
    std::cout << "capacity: " << s1.capacity() << std::endl;
    s1.push_back(1);
    std::cout << "capacity: " << s1.capacity() << std::endl;
    s1.push_back(2);
    std::cout << "capacity: " << s1.capacity() << std::endl;
    s1.push_back(2);
    std::cout << "capacity: " << s1.capacity() << std::endl;
    s1.push_back(2);
    std::cout << "capacity: " << s1.capacity() << std::endl;
    s1.push_back(2);
    std::cout << "capacity: " << s1.capacity() << std::endl;
    
    print_vec(s1);

    vector<int> s2(10, 1);
    std::cout << "capacity: " << s2.capacity() << std::endl;
    s2.push_back(2);
    std::cout << "capacity: " << s2.capacity() << std::endl;
    s2.push_back(2);
    std::cout << "capacity: " << s2.capacity() << std::endl;
    s2.push_back(2);
    std::cout << "capacity: " << s2.capacity() << std::endl;
    s2.push_back(2);
    std::cout << "capacity: " << s2.capacity() << std::endl;

    print_vec(s2);










    // // capacity
    // std::cout << "capacity: " << s1.capacity() << std::endl;
    
    // s1.push_back(1);
    // s1.push_back(2);
    // s1.push_back(212121);
    // print_vec(s1);

    // s1.push_back(1);

    // std::cout << "capacity: " << s1.capacity() << std::endl;
}