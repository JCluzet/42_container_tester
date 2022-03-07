/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 18:19:59 by jcluzet           #+#    #+#             */
/*   Updated: 2022/03/07 18:20:47 by jcluzet          ###   ########.fr       */
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
    vector<int> s2;
    s2.assign(s1.begin(), s1.end());
    vector<int>::iterator it2 = s2.begin();
    vector<int>::iterator it2r = s2.end();
    while (it2 != it2r)
    {
        std::cout << *it2 << std::endl;
        it2++;
    }

    // assign with value
    vector<int> s3;
    s3.assign(3, 1);
    vector<int>::iterator it3 = s3.begin();
    vector<int>::iterator it3r = s3.end();
    while (it3 != it3r)
    {
        std::cout << *it3 << std::endl;
        it3++;
    }
    return 0;
}