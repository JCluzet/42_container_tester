/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 18:19:59 by jcluzet           #+#    #+#             */
/*   Updated: 2022/03/08 01:30:25 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.hpp"

int main()
{
    vector<int> s1;
    s1.push_back(1);
    s1.push_back(2);
    s1.push_back(212121);

    // assign
    vector<int> s2(4, 2);
    s2.assign(s1.begin(), s1.end());
    print_vec(s2);

    // assign with value
    vector<int> s3;
    s3.assign(3, 1);
    print_vec(s3);
    return 0;
}
