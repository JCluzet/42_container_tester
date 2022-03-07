/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 19:52:50 by jcluzet           #+#    #+#             */
/*   Updated: 2022/03/08 00:56:52 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.hpp"

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

int main()
{
    //insert 
    vector<int> s2(4, 2);

    // insert value 1x value 0 at position iterator
    vector<int>::iterator it = s2.begin() + 1;
    s2.insert(it, 1, 0);
    print_vec(s2);

    std::cout << std::endl;

    // insert value 9 at position iterator
    vector<int> s3(5,2);
    vector<int>::iterator it2 = s3.begin() + 1;
    s3.insert(it2, 9);
    print_vec(s3);

    std::cout << std::endl;

    // using insert(iterator, first, last)
    vector<int> s4(5,2);
    vector<int>::iterator it3 = s4.begin() + 1;
    vector<int>::iterator it3r = s4.begin() + 3;
    s4.insert(it3, s3.begin(), s3.end());
    print_vec(s4);

    std::cout << std::endl;

    // test insert with all possible positions
    s2.insert(s2.begin(), 1);
    s2.insert(s2.begin() + 1, 2);
    s2.insert(s2.begin() + 2, 212121);
    s2.insert(it3, s3.begin(), s3.end());
    
    print_vec(s2);
    return(0);
}