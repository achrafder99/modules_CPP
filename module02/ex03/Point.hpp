/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 21:33:11 by adardour          #+#    #+#             */
/*   Updated: 2023/07/22 11:36:41 by adardour         ###   ########.fr       */
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
        void    operator=(const Point &other);
};

#endif