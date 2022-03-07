/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 19:52:50 by jcluzet           #+#    #+#             */
/*   Updated: 2022/03/07 19:53:51 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.hpp"

int main()
{
    //insert 
    vector<int> s1;
    s1.push_back(1);
    s1.push_back(2);
    s1.push_back(212121);

    // insert function 
    s1.insert(s1.begin(), 0);
    s1.insert(s1.begin() + 1, 0);
    s1.insert(s1.begin() + 2, 0);
    return(0);
}