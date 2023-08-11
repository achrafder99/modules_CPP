/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 10:58:19 by adardour          #+#    #+#             */
/*   Updated: 2023/08/09 21:52:54 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{   
    int size = 4;
    int half = size / 2;
    if (size < 0)
    {
        std::cout << "Invalid size" << std::endl;
        return (0);
    }
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    int index = 0;


    delete j;
    delete i;
    Dog basic;
    {
        Dog temp = basic;
    }

    const Animal* animals[size];
    while (index < half)
    {
        animals[index] = new Dog();
        index++;
    }
    while (index < size)
    {
        animals[index] = new Cat();
        index++;
    }
    index = 0;
    while(index < size)
    {
        delete animals[index];
        index++;
    }
}