/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_vec.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 01:20:05 by jcluzet           #+#    #+#             */
/*   Updated: 2022/03/08 01:20:34 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

void print_vec(vector<int> &v)
{
    vector<int>::iterator it = v.begin();
    vector<int>::iterator itr = v.end();
    while (it != itr)
    {
        std::cout << *it << std::endl;
        it++;
    }
}