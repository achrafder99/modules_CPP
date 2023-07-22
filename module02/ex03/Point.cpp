/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 21:33:09 by adardour          #+#    #+#             */
/*   Updated: 2023/07/21 21:53:49 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() :x(0), y(0) {
    
}

Point::Point(const float float_1, const float float_2) :x(float_1), y(float_2) {
    
}

Point::Point(const Point &other) : x(other.x) , y(other.y)
{
    
}