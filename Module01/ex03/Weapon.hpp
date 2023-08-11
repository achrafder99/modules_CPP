/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 08:58:18 by adardour          #+#    #+#             */
/*   Updated: 2023/08/02 18:53:48 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>

class Weapon{
    private:
        std::string type;
    public:
        Weapon();
        Weapon (std::string w_type);
        void setType(const std::string type);
        const std::string& getType () const;
};
#endif