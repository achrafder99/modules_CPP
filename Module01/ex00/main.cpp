/* ************************************************************************** */
/*                                                                          */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 10:59:09 by adardour          #+#    #+#             */
/*   Updated: 2023/08/02 11:38:55 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include   "Zombie.hpp"

int main()
{
    std::cout << "allocate on the heap :" << std::endl;
    Zombie *z1 = newZombie("Zombie 1");
    std::cout << "allocate on the Stack :" << std::endl;
    randomChump("Zombie 2");
    delete z1;
    return (0);
}