/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 12:19:32 by adardour          #+#    #+#             */
/*   Updated: 2023/08/08 13:59:15 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal
{
    public:
        Cat();
        Cat(std::string type);
        Cat(const Cat& cat);
        Cat& operator=(const Cat &cat);
        void makeSound() const;
        std::string getType() const;
        void    setType(const std::string &type);
        ~Cat();
};

#endif