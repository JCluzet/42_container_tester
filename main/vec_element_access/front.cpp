/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   front.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 01:46:09 by jcluzet           #+#    #+#             */
/*   Updated: 2022/03/08 01:46:43 by jcluzet          ###   ########.fr       */
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

    // front
    std::cout << s1.front() << std::endl;
    print_vec(s1);
}