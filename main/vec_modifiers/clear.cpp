/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 01:27:30 by jcluzet           #+#    #+#             */
/*   Updated: 2022/03/08 01:28:20 by jcluzet          ###   ########.fr       */
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

    // clear
    s1.clear();
    print_vec(s1);
    
    s1.push_back(1);
    s1.push_back(2);
    
    print_vec(s1);
    
    s1.clear();
    print_vec(s1);
}