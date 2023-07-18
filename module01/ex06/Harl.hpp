/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 15:47:17 by adardour          #+#    #+#             */
/*   Updated: 2023/07/18 20:28:14 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

enum harl 
{   
    DEBUG,
    INFO,
    WARNING,
    ERROR,
};


#include <iostream>

class Harl{
    private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
    public:
        void complain(const std::string level);
};

int convierte_to_int(std::string level);


#endif