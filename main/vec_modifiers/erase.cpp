/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   erase.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 01:15:27 by jcluzet           #+#    #+#             */
/*   Updated: 2022/03/20 12:28:19 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.hpp"

int main()
{
    vector<int> s1;
    s1.push_back(1);
    s1.push_back(2);
    s1.push_back(212121);
    print_vec(s1);

    // erase
    s1.erase(s1.begin());
    print_vec(s1);

    

    // erase with iterator
    s1.erase(s1.begin(), s1.begin());
    print_vec(s1);
	vector<int> r;
	for (int i = 0; i < 10; i++)
		r.push_back(i);
	print_vec(r);
	std::cout << "r.erase(r.begin() + 3) = " << std::to_string(*(r.erase(r.begin() + 3))) << std::endl;
	print_vec(r);
	std::cout << "r.erase(r.end() - 1) = " << std::to_string(*(r.erase(r.end() - 1))) << std::endl;
	print_vec(r);
	std::cout << "r.erase(r.begin() + 3, r.begin() + 6) = " << std::to_string(*(r.erase(r.begin()+3,r.begin()+6))) << std::endl;
	print_vec(r);
}