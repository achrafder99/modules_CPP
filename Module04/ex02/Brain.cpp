/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 14:57:40 by adardour          #+#    #+#             */
/*   Updated: 2023/08/08 17:18:03 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "default constructor called" << std::endl;
}

Brain::Brain(const Brain& brain)
{
    *this = brain;
    std::cout << "copie constructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& brain)
{
    if (this == &brain)
    {
        return *this;
    }
    for (size_t i = 0; i < 100; i++)
        ideas[i] = brain.ideas[i];
    return (*this);
}

Brain::~Brain()
{
    std::cout << "brain destroyed" << std::endl;
}