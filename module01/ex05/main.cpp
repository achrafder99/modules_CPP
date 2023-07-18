/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 17:17:57 by adardour          #+#    #+#             */
/*   Updated: 2023/07/18 17:37:22 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl harl;
    std::string level;


    std::cout << "Enter a level in Uppercase : for example (DEBUG - INFO - WARNING - ERROR or EXIT) : ";
    std::getline(std::cin, level);
    while (level != "EXIT")
    {
        harl.complain(level);
        std::cout << "Enter a level in Uppercase : for example (DEBUG - INFO - WARNING - ERROR or EXIT) : ";
        std::getline(std::cin, level);
    }
}