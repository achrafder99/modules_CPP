/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 16:36:29 by adardour          #+#    #+#             */
/*   Updated: 2023/08/07 18:45:51 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    ClapTrap clap("achraf");
    DiamondTrap diamondTrap("Sparky");

    diamondTrap.whoAmI();
    diamondTrap.attack("Bandit");
    diamondTrap.takeDamage(50);
    diamondTrap.beRepaired(20);
    diamondTrap.highFivesGuys();

    return 0;
}