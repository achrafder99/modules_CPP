/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 21:31:12 by adardour          #+#    #+#             */
/*   Updated: 2023/08/05 17:42:27 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed get_area(Fixed xx, Fixed xy, Fixed yx, Fixed yy, Fixed zx, Fixed zy)
{
    Fixed area = std::abs((xx * yy - xy * yx) + (yx * (zy - xy)) + (zx * (xy - yy)));
    return (area * Fixed(0.5f));
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed AREA_OF_XYZ = get_area(a.get_x(), a.get_y(), b.get_x(), b.get_y(),c.get_x(), c.get_y());
    Fixed AREA_OF_PYX = get_area(point.get_x(),point.get_y(), b.get_x(),b.get_y(),a.get_x(),a.get_y());
    Fixed AREA_OF_PXZ = get_area(point.get_x(),point.get_y(), a.get_x(),a.get_y(),c.get_x(),c.get_y());
    Fixed AREA_OF_PYZ = get_area(point.get_x(),point.get_y(), b.get_x(),b.get_y(),c.get_x(),c.get_y());
    std::cout << "Results: " ;
    return ((AREA_OF_PYX.toFloat() + AREA_OF_PXZ.toFloat() + AREA_OF_PYZ.toFloat()) == AREA_OF_XYZ.toFloat());
}