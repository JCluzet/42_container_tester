/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 22:13:40 by jcluzet           #+#    #+#             */
/*   Updated: 2022/04/14 14:28:35 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

namespace std {}
using namespace std;

#include <vector>
#include <iostream>
#include <stack>
#include <iterator>
#include "../.././stack.hpp"
#include "../.././vector.hpp"
#include "../.././map.hpp"
#include <map>
 
template <typename T>
void print_vec(vector <T> &v)
{
    for (size_t i = 0; i < v.size(); i++)
        std::cout << v[i] << " ";
    std::cout << "capacity:" << v.capacity();
    std::cout << " size:" << v.size() << std::endl;
    std::cout << std::endl;
}
