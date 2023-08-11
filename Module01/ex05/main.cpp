/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 17:17:57 by adardour          #+#    #+#             */
/*   Updated: 2023/08/02 14:57:41 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl harl;
    std::string level;


    std::cout << "Enter a level in Uppercase : for example (DEBUG - INFO - WARNING - ERROR or EXIT) : ";
    while (level != "EXIT" && std::getline(std::cin, level) != NULL)
    {
        harl.complain(level);
        std::cout << "Enter a level in Uppercase : for example (DEBUG - INFO - WARNING - ERROR or EXIT) : ";
    }
}