/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 16:14:27 by adardour          #+#    #+#             */
/*   Updated: 2023/08/02 14:52:51 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int convicted_to_int(std::string level)
{
    return (level == "DEBUG" ? 0 : level == "INFO" ? 1 : level == "WARNING" ? 2 : level == "ERROR" ? 3 : -1);
}

void    Harl::debug()
{
    std::cout << "Debug messages contain contextual information. They are mostly \n \
    used for problem diagnosis.\n\
    Example: \"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void    Harl::info()
{
    std::cout << "These messages contain extensive information. They are helpful for\n\
    tracing program execution in a production environment.\n\
    Example: \"I cannot believe adding extra bacon costs more money. You didn’t put\n\
    enough bacon in my burger! If you did, I wouldn’t be asking for more!\"" << std::endl;   
}

void    Harl::warning()
{
    std::cout << "Warning messages indicate a potential issue in the system.\n\
    However, it can be handled or ignored.\n\
    Example: \"I think I deserve to have some extra bacon for free. I’ve been coming for\n\
    years whereas you started working here since last month.\"" << std::endl;
}

void    Harl::error()
{
    std::cout << "These messages indicate an unrecoverable error has occurred.\n\
    This is usually a critical issue that requires manual intervention.\n\
    Example: \"This is unacceptable! I want to speak to the manager now.\"" << std::endl;
}

void    Harl::complain(std::string level)
{
    int level_int = convicted_to_int(level);
    void (Harl::* ptfptr) (void) = nullptr;
    switch (level_int)
    {
        case 0:
            ptfptr = &Harl::debug; 
            break;
        case 1:
            ptfptr = &Harl::info; 
            break;
        case 2:
            ptfptr = &Harl::warning; 
            break;
        case 3:
            ptfptr = &Harl::error; 
            break;
        default:
            std::cout << "Error at level try again" << std::endl;
    }
    if (ptfptr != nullptr)
        (this->*ptfptr)();
}
