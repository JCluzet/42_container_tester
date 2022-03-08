/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_size.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 01:35:02 by jcluzet           #+#    #+#             */
/*   Updated: 2022/03/08 01:35:34 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.hpp"

int main()
{
    vector<int> s1;
    std::cout << "max_size: " << s1.max_size() << std::endl;
    s1.push_back(1);
    s1.push_back(2);
    s1.push_back(212121);
    std::cout << "max_size: " << s1.max_size() << std::endl;
    s1.clear();
    std::cout << "max_size: " << s1.max_size() << std::endl;
    return(0);
}