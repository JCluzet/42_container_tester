/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_constructor.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 19:49:13 by jcluzet           #+#    #+#             */
/*   Updated: 2022/03/07 00:57:41 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../main.hpp"

int main()
{
    vector<int> s4(10, 2);
    vector<int>::iterator p1 = s4.begin();
    vector<int>::iterator p2 = s4.end();
    while (p1 != p2)
    {
        std::cout << *p1 << std::endl;
        p1++;
    }
    std::cout << std::endl;
}