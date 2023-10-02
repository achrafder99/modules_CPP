/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 00:06:37 by adardour          #+#    #+#             */
/*   Updated: 2023/09/20 17:42:04 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

        

#include "ScalarConverter.hpp"

int main(int c, char **argv)
{
    try
    {
        if (ScalarConverter::convert(argv[1]))
        {
            if (std::isprint(ScalarConverter::getChar()))
                std::cout << "char: " << ScalarConverter::ScalarConverter::getChar() << '\n';
            else
                std::cout << "char: " << "non displayable" << '\n';
            std::cout << "int: " << ScalarConverter::getINt() << '\n';
            std::cout << "float: " << std::fixed << std::setprecision(1) << ScalarConverter::getFloat() << "f "<< '\n';
            std::cout << "double: " << std::fixed << std::setprecision(1) << ScalarConverter::getDouble() << '\n';
        }
    }
    catch(const char *e)
    {
        std::cout << "char: " << e << '\n';
        std::cout << "int: " << e << '\n';
        std::cout << "float: " << "nanf" << '\n';
        std::cout << "double: " << "nan" << '\n';
    }
    catch (const std::out_of_range& e)
    {
        (void)e;
        std::cout << "char: " << "impossible" << '\n';
        std::cout << "int: " << "out_of_range" << '\n';
        std::cout << "float: " << "out_of_range" << '\n';
        std::cout << "double: " << "out_of_range" << '\n';
        return false;
    }
}