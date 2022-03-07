/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   range_constructor.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 19:49:13 by jcluzet           #+#    #+#             */
/*   Updated: 2022/03/07 01:06:11 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../main.hpp"

int main()
{
    vector<int> s1;
    s1.push_back(1);

    // range constructor
    vector<int> s3(s1.begin(), s1.end());
    vector<int>::iterator it3 = s3.begin();
    vector<int>::iterator it4 = s3.end();
    while (it3 != it4)
    {
        std::cout << *it3 << std::endl;
        it3++;
    }
    return 0;
}