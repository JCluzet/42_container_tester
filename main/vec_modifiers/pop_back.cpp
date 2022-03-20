/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop_back.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 19:49:13 by jcluzet           #+#    #+#             */
/*   Updated: 2022/03/20 12:29:58 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.hpp"

int main()
{
    vector<int> s1;
    s1.push_back(1);
    s1.push_back(2);
    s1.push_back(212121);
    s1.push_back(212122121);
    s1.pop_back();
    s1.pop_back();
    s1.pop_back();

    // range constructor
    vector<int> s3(s1.begin(), s1.end());
    print_vec(s3);
	vector<int> p(3, 5);
	for (size_t i = 0; i < p.size(); i++) {
		p.pop_back();
		std::cout << "p.pop_back()" << std::endl;
		print_vec(p);
	}
	std::cout << std::endl;
    return 0;
}