/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   range_constructor.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 19:49:13 by jcluzet           #+#    #+#             */
/*   Updated: 2022/03/20 12:30:27 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.hpp"

int main()
{
    vector<int> s1;
    s1.push_back(1);
    s1.push_back(2);
    print_vec(s1);
    // range constructor
    vector<int> s3(s1.begin(), s1.end());
    print_vec(s3);
    vector<int> d;
    for (size_t i = 0; i < 20; i++)
        d.push_back(i);
    std::cout << "d : ";
	print_vec(d);
    vector<int> e(d.begin(), d.end());
    std::cout << "vector<int> e(d.begin(), d.end());" << std::endl;
	std::cout << "e : ";
    print_vec(e);
	std::cout << std::endl;
    return 0;
}