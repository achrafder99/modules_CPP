/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 21:47:13 by adardour          #+#    #+#             */
/*   Updated: 2023/08/05 19:22:46 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main()
{   
    Point X(0,0);
    Point Y(10,30);
    Point Z(20,0);
    Point P(30,15);

    if (X.get_x().toFloat() < 0 || X.get_y().toFloat() < 0 || Y.get_x().toFloat() < 0 || Y.get_y().toFloat() < 0 || Z.get_x().toFloat() < 0 || Z.get_y().toFloat() < 0)
    {
        std::cout << "Vertexes must be Positive " << std::endl;
        return (0);
    }
    
    if (bsp(X,Y,Z,P))
        std::cout << "inside" << std::endl;
    else
        std::cout << "outside" << std::endl;
    return (0);
}