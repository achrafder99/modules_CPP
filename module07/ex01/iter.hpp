/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 20:54:09 by adardour          #+#    #+#             */
/*   Updated: 2023/09/21 21:57:36 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template<typename Type,size_t N, typename Apply_func>
void    iter(Type (&arr)[N], size_t length ,Apply_func func)
{
    for (size_t i = 0; i < length; i++)
        func(arr[i]);
}

template<typename T>
void apply(const T& value)
{
    if ((value % 2) == 0)
        std::cout << value << " ";
}

template<typename T>
void apply_string(const T& value)
{
    std::cout << value << " ";
}
