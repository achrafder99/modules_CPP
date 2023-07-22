/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 12:06:53 by adardour          #+#    #+#             */
/*   Updated: 2023/07/22 17:15:41 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap cl4ptp("ddd");

    cl4ptp.attack("okok");
    cl4ptp.takeDamage(6);
    printf("hit %d\n", cl4ptp.get_hit());
    cl4ptp.beRepaired(10);
    printf("hit %d\n", cl4ptp.get_hit());
    cl4ptp.attack("dardour");
}