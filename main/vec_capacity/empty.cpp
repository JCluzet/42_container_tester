/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   empty.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 01:40:14 by jcluzet           #+#    #+#             */
/*   Updated: 2022/03/20 12:28:04 by jcluzet          ###   ########.fr       */
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

    // empty
    std::cout << "empty: " << s1.empty() << std::endl;
	vector<int> k;
    print_vec(k);
    std::cout << "k.empty() = " << k.empty() << std::endl;
    k.push_back(0);
	std::cout << "k.push_back(0)" << std::endl;
    print_vec(k);
    std::cout << k.empty() << std::endl;
    k.pop_back();
	std::cout << "k.pop_back()" << std::endl;
    print_vec(k);
    std::cout << k.empty() << std::endl;
    std::cout << std::endl;
}