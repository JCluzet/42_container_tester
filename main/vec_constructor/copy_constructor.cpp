/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy_constructor.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 19:49:13 by jcluzet           #+#    #+#             */
/*   Updated: 2022/03/20 12:27:50 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.hpp"

int main()
{
    vector<int> s1;
    s1.push_back(1);

    // copy constructor
    vector<int> s2(s1);
    print_vec(s2);
    vector<int> a;
    for (size_t i = 0; i < 198; i++){
        a.push_back(i);
    }
    // print_vec(a);
	print_vec(a);
    vector<int> b(a);
    print_vec(b);
    return(0);
}