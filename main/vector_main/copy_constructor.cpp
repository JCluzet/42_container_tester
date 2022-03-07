/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   range_constructor copy.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 19:49:13 by jcluzet           #+#    #+#             */
/*   Updated: 2022/03/07 01:07:02 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../main.hpp"

int main()
{
    vector<int> s1;
    s1.push_back(1);

    // copy constructor
    vector<int> s2(s1);
    vector<int>::iterator itr = s2.begin();
    vector<int>::iterator it2r = s2.end();
    while (itr != it2r)
    {
        std::cout << *itr << std::endl;
        itr++;
    }
    return(0);
}