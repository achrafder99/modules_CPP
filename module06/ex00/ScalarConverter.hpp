/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 00:07:11 by adardour          #+#    #+#             */
/*   Updated: 2023/09/20 17:28:03 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <iomanip> 
#include <string>
#include <cmath>
#include <limits>

class ScalarConverter
{
    private:
        static int integer;
        static char character;
        static float _float;
        static double _double;
    public:
        static int convert(std::string str);
        // getters
        static int getINt();
        static char getChar();
        static float getFloat();
        static double getDouble();
};

#endif