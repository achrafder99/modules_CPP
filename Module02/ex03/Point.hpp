/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 21:33:11 by adardour          #+#    #+#             */
/*   Updated: 2023/08/04 21:31:36 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
    private:
        const Fixed  x;  
        const Fixed  y; 
    public:
        Point();
        Point(const float float_1,const float float_2);
        Point(const Point &other);
        Point &operator=(const Point &other);
        ~Point();
        const Fixed get_x() const;
        const Fixed get_y() const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif