/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 18:38:20 by adardour          #+#    #+#             */
/*   Updated: 2023/09/21 20:51:24 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdio.h>

template<typename Type>
void    swap(Type &a, Type &b)
{
    Type temp = a;
    a = b;
    b = temp;
}

template<typename Type>
Type    min(Type &a, Type &b)
{
    if (a == b)
    {
        return (a);
    }
    return (a > b ? b : a);
}

template<typename Type>
Type    max(Type &a, Type &b)
{
    if (a == b)
        return (b);
    return (a < b ? b : a);
}
