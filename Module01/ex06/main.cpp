/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 19:54:14 by adardour          #+#    #+#             */
/*   Updated: 2023/08/02 15:00:56 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    from_debug(Harl harl)
{
    harl.complain("DEBUG");   
    harl.complain("INFO");   
    harl.complain("WARNING");   
    harl.complain("ERROR");   
}

void    from_info(Harl harl)
{
    harl.complain("INFO");   
    harl.complain("WARNING");   
    harl.complain("ERROR");   
}

void    from_warning(Harl harl)
{  
    harl.complain("WARNING");   
    harl.complain("ERROR");   
}

void    from_error(Harl harl)
{
    harl.complain("ERROR");   
}

int main(int c, char**argv)
{
    if (c != 2)
    {
        std::cout << "error~" << std::endl;
        return (1);
    }
    Harl harl;
    int level = converted_to_int(argv[1]);
    switch (level)
    {
    case DEBUG:
        from_debug(harl);
        break;
    case INFO:
        from_info(harl);
        break;
    case WARNING:
        from_warning(harl);
        break;
    case ERROR:
        from_error(harl);
        break;
    default:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        break;
    }
}