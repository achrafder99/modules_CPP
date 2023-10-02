/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 00:07:03 by adardour          #+#    #+#             */
/*   Updated: 2023/09/20 17:43:38 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <stdio.h>
#include <string>
#include <sstream>
#include <stdio.h>
#include <iomanip>

int ScalarConverter::integer;
char ScalarConverter::character;
float ScalarConverter::_float;
double ScalarConverter::_double;

std::string is_float_double(std::string &str)
{
    int i;
    int size;
    size = 0;
    int decimal_point;
    int car;
    int check_f;
    i = 0;
    decimal_point = 0;
    check_f = 0;
    car = 0;
    while (str[i])
    {
        if (str[i] != '.'&& str[i] != 'f' && !std::isdigit(str[i]))
            car = 1;
        else if (str[i] == '.')
            decimal_point++;
        else if (str[i] == 'f')
            check_f++;
        i++;
    }
    if (car == 0 && decimal_point == 1 && check_f == 1)
        return ("float");
    else if (car == 0 && decimal_point == 1)
        return ("double");
    return ("nan");    
}

std::string is_int(std::string &str)
{
    int i = 0;
    if (str[i] == '-')
        i = 1;
    while (str[i])
    {
        if (!std::isdigit(str[i]))
            return ("nan");
        i++;
    }
    return ("integer");
}

int ScalarConverter::convert(std::string str)
{
    if (is_int(str) == "integer" || is_float_double(str) == "float" || is_float_double(str) == "double"
    || str == "-inff" || str == "+inff" || str == "-inf" || str == "+inf")
    {
        if (is_int(str) == "integer")
        {
            ScalarConverter::integer = std::stoi(str);
            ScalarConverter::character = static_cast<char>(ScalarConverter::integer);
            ScalarConverter::_float = static_cast<float>(ScalarConverter::integer);
            ScalarConverter::_double = static_cast<double>(ScalarConverter::integer);
        }
        else if (is_float_double(str) == "float")
        {
            ScalarConverter::_float = std::stof(str);
            ScalarConverter::integer = static_cast<char>(ScalarConverter::_float);
            ScalarConverter::character = static_cast<char>(ScalarConverter::integer);
            ScalarConverter::_double = static_cast<double>(ScalarConverter::_float);
        }
        else if (is_float_double(str) == "double")
        {
            ScalarConverter::_float = std::stod(str);
            ScalarConverter::integer = static_cast<char>(ScalarConverter::_double);
            ScalarConverter::character = static_cast<char>(ScalarConverter::integer);
            ScalarConverter::_double = static_cast<double>(ScalarConverter::_double);
        }
        else if (str == "-inff" || str == "+inff")
        {
            if (str == "-inff")
            {
                ScalarConverter::_float = -std::numeric_limits<float>::infinity(); 
                ScalarConverter::_double = static_cast<double>(ScalarConverter::_float);
                std::cout << "char: " << "impossible" << std::endl; 
                std::cout << "int: " << "impossible" << std::endl;
                std::cout << "float: " << ScalarConverter::_float << "f" << std::endl;
                std::cout << "double: " << ScalarConverter::_double << std::endl;
            }
            else
            {
                ScalarConverter::_float = std::numeric_limits<float>::infinity(); 
                ScalarConverter::_double = static_cast<double>(ScalarConverter::_float);
                std::cout << "char: " << "impossible" << std::endl; 
                std::cout << "int: " << "impossible" << std::endl;
                std::cout << "float: " << "+" << ScalarConverter::_float << "f" << std::endl;
                std::cout << "double: " << "+"  << ScalarConverter::_double << std::endl;
            }
        }
        else if (str == "-inf" || str == "+inf")
        {
            if (str == "-inf")
            {
                ScalarConverter::_double = -std::numeric_limits<double>::infinity(); 
                ScalarConverter::_float = static_cast<float>(ScalarConverter::_double);
                std::cout << "char: " << "impossible" << std::endl; 
                std::cout << "int: " << "impossible" << std::endl;
                std::cout << "float: "<< ScalarConverter::_float << "f" << std::endl;
                std::cout << "double: "  << ScalarConverter::_double << std::endl;
            }
            else
            {
                ScalarConverter::_double = std::numeric_limits<float>::infinity(); 
                ScalarConverter::_float = static_cast<float>(ScalarConverter::_double);
                std::cout << "char: " << "impossible" << std::endl; 
                std::cout << "int: " << "impossible" << std::endl;
                std::cout << "float: " << "+" << ScalarConverter::_float << "f" << std::endl;
                std::cout << "double: " << "+"  << ScalarConverter::_double << std::endl;
            }
        }
    }
    else 
        throw "Impossible";
    return (1);
}



int ScalarConverter::getINt()
{
    return (integer);
}

char ScalarConverter::getChar()
{
    return (character);
}

float ScalarConverter::getFloat()
{
    return (_float);
}

double ScalarConverter::getDouble()
{
    return (_double);
}