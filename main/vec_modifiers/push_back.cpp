/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_back.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 19:49:13 by jcluzet           #+#    #+#             */
/*   Updated: 2022/03/20 12:30:10 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.hpp"

int main()
{
    vector<int> s1;
    s1.push_back(1);
    s1.push_back(2);
    s1.push_back(212121);

    // range constructor
    vector<int> s3(s1.begin(), s1.end());
    print_vec(s3);
	vector<int> o;
	for (int ii = 0; ii < 203; ii++) {
		o.push_back(ii);
		// std::cout << "o.push_back(1)" << std::endl;
		print_vec(o);
	}
	std::cout << std::endl;
    return 0;
}