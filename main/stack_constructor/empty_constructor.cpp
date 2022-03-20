/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   empty_constructor.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 16:31:22 by jcluzet           #+#    #+#             */
/*   Updated: 2022/03/20 02:17:12 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.hpp"

int main()
{
    std::cout << "INT CONSTRUCTOR:"    << std::endl;

    stack<int> s1;
    s1.push(1);
    std::cout << "top: " << s1.top() << std::endl;
    s1.push(2);
    std::cout << "top: " << s1.top() << std::endl;
    s1.push(212121);
    std::cout << "top: " << s1.top() << std::endl;

    // std::cout << "CHAR CONSTRUCTOR:"    << std::endl;

    // stack<char> s2;
    // s2.push('a');
    // std::cout << "top: " << s2.top() << std::endl;
    // s2.push('b');
    // std::cout << "top: " << s2.top() << std::endl;
    // s2.push('c');
    // std::cout << "top: " << s2.top() << std::endl;

    // std::cout << "FLOAT CONSTRUCTOR:"    << std::endl;


    // stack<float> s3;
    // s3.push(1.1);
    // std::cout << "top: " << s3.top() << std::endl;
    // s3.push(2.2);
    // std::cout << "top: " << s3.top() << std::endl;
    // s3.push(3.3);
    // std::cout << "top: " << s3.top() << std::endl;

    

    return(0);
}