/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 12:11:15 by adardour          #+#    #+#             */
/*   Updated: 2023/08/10 15:08:28 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {
    
    public:
        Ice();    
        Ice(const Ice& other);    
        Ice& operator=(const Ice& ice); 
        AMateria* clone() const;
        void use(ICharacter& target);    
        ~Ice();    
};

#endif