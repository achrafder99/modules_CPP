/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 10:58:19 by adardour          #+#    #+#             */
/*   Updated: 2023/08/08 14:28:03 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    std::cout << "** Animal ***************************" << std::endl;
    std::cout << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    
    delete i;
    delete j;
    delete meta;
    std::cout << std::endl;
    std::cout << "** Wrong Animal **********************" << std::endl;
    std::cout << std::endl;
    std::cout << "** Animal ***************************" << std::endl;
    std::cout << std::endl;
    const WrongAnimal* wrong_meta = new WrongAnimal();
    const WrongAnimal* wrong_i = new WrongCat();
    std::cout << wrong_i->getType() << " " << std::endl;
    wrong_i->makeSound();
    wrong_meta ->makeSound();
    
    delete wrong_i;
    delete wrong_meta;

}