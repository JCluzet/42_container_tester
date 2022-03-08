/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator[].cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 01:43:31 by jcluzet           #+#    #+#             */
/*   Updated: 2022/03/08 01:43:45 by jcluzet          ###   ########.fr       */
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

    // operator[]
    std::cout << "operator[]: " << s1[0] << std::endl;
    std::cout << "operator[]: " << s1[1] << std::endl;
    std::cout << "operator[]: " << s1[2] << std::endl;
}