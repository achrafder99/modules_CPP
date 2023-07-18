/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 09:48:52 by adardour          #+#    #+#             */
/*   Updated: 2023/07/18 11:38:15 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB{
    private:
        Weapon *weapon;
        std::string name;
    public:
        HumanB(std::string name_human);
        void    attack();
        void    setWeapon(Weapon &weapon);
        ~HumanB();
};

#endif