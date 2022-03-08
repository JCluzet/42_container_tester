/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   back.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 01:47:01 by jcluzet           #+#    #+#             */
/*   Updated: 2022/03/08 01:47:36 by jcluzet          ###   ########.fr       */
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
    
    // back
    std::cout << s1.back() << std::endl;
    print_vec(s1);
}