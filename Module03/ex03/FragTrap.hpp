/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 15:05:53 by adardour          #+#    #+#             */
/*   Updated: 2023/08/07 17:21:04 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#ifndef FRAG_TRAP
#define FRAG_TRAP

class FragTrap : virtual public ClapTrap
{
    public:
        FragTrap(std::string &name_frag);
        FragTrap();
        FragTrap(const FragTrap& FragTrap);
        FragTrap& operator=(const FragTrap& scavtrap);
        ~FragTrap();
        void  attack(const std::string &target);
        void    guardGate();
        void highFivesGuys(void);
};

#endif