/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 01:33:18 by jcluzet           #+#    #+#             */
/*   Updated: 2022/03/20 12:31:07 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.hpp"

int main()
{
    vector<int> s1;
    std::cout << "size: " << s1.size() << std::endl;
    s1.push_back(1);
    s1.push_back(2);
    s1.push_back(212121);

    print_vec(s1);
    std::cout << "size: " << s1.size() << std::endl;

    s1.clear();
    print_vec(s1);
    std::cout << "size: " << s1.size() << std::endl;
    vector<int> f;
    std::cout << "vector f" << std::endl << "f.size = " << f.size() << std::endl;
    vector<int> g(12,4);
    std::cout << "vector g(12, 4)" << std::endl << "g.size = " << g.size() << std::endl;
    vector<int> h(g.begin(), g.begin()+3);
    std::cout << "vector h(g.begin(), g.begin()+3)" << std::endl << "h.size = " << h.size() << std::endl;
	std::cout << std::endl;
    return(0);
}