/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resize.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 01:36:33 by jcluzet           #+#    #+#             */
/*   Updated: 2022/03/19 23:43:50 by jcluzet          ###   ########.fr       */
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

    s1.resize(2);
    print_vec(s1);

    // resize
    s1.resize(5);
    print_vec(s1);

    s1.resize(8);
    print_vec(s1);

    s1.resize(9);
    print_vec(s1);

    s1.resize(5);
    print_vec(s1);

    s1.resize(0);
    print_vec(s1);
}