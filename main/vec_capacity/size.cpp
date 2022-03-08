/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 01:33:18 by jcluzet           #+#    #+#             */
/*   Updated: 2022/03/08 01:34:23 by jcluzet          ###   ########.fr       */
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
    return(0);
}