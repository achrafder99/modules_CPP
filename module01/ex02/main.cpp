/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 08:43:52 by adardour          #+#    #+#             */
/*   Updated: 2023/07/18 08:55:17 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "print memories addresses" << std::endl;
    std::cout << "memory address of the string variable :" << &str << std::endl;
    std::cout << "memory address held by stringPTR. :" << stringPTR << std::endl;
    std::cout << "The memory address held by stringREF :" << &stringREF << std::endl;

    std::cout << "print values" << std::endl;
    std::cout << "value of the string variable. :" << str << std::endl;
    std::cout << "value pointed to by stringPTR. :" << *stringPTR << std::endl;
    std::cout << "value pointed to by stringREF. :" << stringREF << std::endl;

}