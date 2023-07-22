/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 21:33:11 by adardour          #+#    #+#             */
/*   Updated: 2023/07/21 21:53:50 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
    private:
        Fixed const x;  
        Fixed const y; 
    public:
        Point();
        Point(const float float_1,const float float_2);
        Point(const Point &other);
};

#endif