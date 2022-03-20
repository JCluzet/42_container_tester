/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 18:19:59 by jcluzet           #+#    #+#             */
/*   Updated: 2022/03/20 12:26:48 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.hpp"

int main()
{
    vector<int> s1;
    s1.push_back(1);
    s1.push_back(2);
    s1.push_back(212121);

    // assign
    vector<int> s2(4, 2);
    s2.assign(s1.begin(), s1.end());
    print_vec(s2);

    // assign with value
    vector<int> s3;
    s3.assign(3, 1);
    print_vec(s3);

	vector<int> m(10, 1);
	print_vec(m);
	m.assign(5, 2);
	std::cout << "m.assign(5, 2)" << std::endl;
	print_vec(m);
	m.assign(15, 4);
	std::cout << "m.assign(15, 4)" << std::endl;
	print_vec(m);
	vector<int> n(12, 1);
	print_vec(m);
	n.assign(m.begin(), m.begin() + 4);
	std::cout << "n.assign(m.begin(), m.begin() + 4)" << std::endl;
	print_vec(m);
	std::cout << std::endl;
    return 0;
}
