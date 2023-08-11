/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 16:14:56 by adardour          #+#    #+#             */
/*   Updated: 2023/08/07 17:33:34 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_TRAP_HPP
#define DIAMOND_TRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap 
{
    private:
        std::string name;
    public:
        DiamondTrap();
        DiamondTrap(std::string name_diamond);
        DiamondTrap(DiamondTrap &diamond);
        DiamondTrap &operator=(const DiamondTrap &diamond);
        void  attack(const std::string &target);
        void whoAmI();
        ~DiamondTrap();
        
};

#endif