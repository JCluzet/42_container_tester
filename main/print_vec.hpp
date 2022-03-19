/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_vec.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 01:20:05 by jcluzet           #+#    #+#             */
/*   Updated: 2022/03/19 12:43:33 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
void print_vec(vector<T> &v)
{
    // print vector using operator []
    for (size_t i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
        std::cout << "capacity : " << v.capacity() << std::endl;
        std::cout << "size : " << v.size() << std::endl;
    // vector<int>::iterator it = v.begin();
    // vector<int>::iterator itr = v.end();
    // while (it != itr)
    // {
    //     std::cout << *it << " ";
    //     it++;
    // }
}

// std::string	ftname(std::string s){
// 	unsigned long space = 40;
// 	std::string r;
// 	for (unsigned long i = 0; i < space - s.size() / 2; i++)
// 		r += '-';
// 	r += s;
// 	for (unsigned long i = 0; i < space - s.size() / 2; i++)
// 		r += '-';
// 	if (!(s.size() % 2))
// 		r += '-';
// 	return r;
// }

// template <typename T>
// std::string	vecToS(std::vector<T> v, std::string s, size_t c){
// 	std::string r = s + " = {";
// 	for (size_t i = 0; i < v.size(); i++) {
// 		r += !i ? "" : ".";
// 		r += std::to_string(v[i]);
// 	}
// 	r += "}, size";
// 	r += std::to_string(v.size());
// 	r += ", capacity";
// 	r += std::to_string(c);
// 	return r;
// }