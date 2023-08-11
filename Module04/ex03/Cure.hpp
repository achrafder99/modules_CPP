/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 12:19:22 by adardour          #+#    #+#             */
/*   Updated: 2023/08/10 15:08:18 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
   public:
        Cure();    
        Cure(const Cure& other);    
        Cure& operator=(const Cure& cure);   
        AMateria* clone() const;
        void use(ICharacter& target); 
        ~Cure();     
};

#endif