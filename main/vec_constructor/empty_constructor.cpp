/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   empty_constructor.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 19:49:13 by jcluzet           #+#    #+#             */
/*   Updated: 2022/03/13 16:45:37 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.hpp"

int main()
{
    std::cout << "INT CONSTRUCTOR:"    << std::endl;
    vector<int> s1;
    s1.push_back(1);

    std::cout << "CHAR CONSTRUCTOR: " << std::endl;
    vector<char> s2;
    s2.push_back('a');
    
    std::cout << "FLOAT CONSTRUCTOR: " << std::endl;
    vector<float> s3;
    s3.push_back(1.1);
    return 0;
}