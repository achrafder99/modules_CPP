/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 14:56:49 by adardour          #+#    #+#             */
/*   Updated: 2023/09/22 16:07:58 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #ifndef EASY_FIND_HPP
// #define EASY_FIND_HPP

#pragma once

#include <iostream>
#include <algorithm>
#include <vector>
#include <stdio.h>

template<typename T>
int    easyfind(T &container, int integer)
{
    typename T::const_iterator it = std::find(container.begin(), container.end(), integer);
    if (it !=  container.end())
    {
        std::cout << "found" << std::endl;
        return (0);
    }
    else
        throw std::runtime_error("Value not found in container");

}


// #endif