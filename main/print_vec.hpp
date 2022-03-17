/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_vec.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 01:20:05 by jcluzet           #+#    #+#             */
/*   Updated: 2022/03/17 18:33:32 by jcluzet          ###   ########.fr       */
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

std::string	ftname(std::string s){
	unsigned long space = 40;
	std::string r;
	for (unsigned long i = 0; i < space - s.size() / 2; i++)
		r += '-';
	r += s;
	for (unsigned long i = 0; i < space - s.size() / 2; i++)
		r += '-';
	if (!(s.size() % 2))
		r += '-';
	return r;
}

template <typename T>
std::string	vecToS(vector<T> v, std::string s, size_t c){
	std::string r = s + " = {";
	for (size_t i = 0; i < v.size(); i++) {
		r += !i ? "" : ".";
		r += std::to_string(v[i]);
	}
	r += "}, size";
	r += std::to_string(v.size());
	r += ", capacity";
	r += std::to_string(c);
	return r;
}