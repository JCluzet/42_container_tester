/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   erase.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 01:15:27 by jcluzet           #+#    #+#             */
/*   Updated: 2022/03/08 01:26:17 by jcluzet          ###   ########.fr       */
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
    s1.erase(s1.begin(), s1.begin() + 2);
    print_vec(s1);
}