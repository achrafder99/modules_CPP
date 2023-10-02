/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:20:07 by adardour          #+#    #+#             */
/*   Updated: 2023/09/21 17:16:07 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

int get_random_number()
{
    std::srand(static_cast<unsigned int>(std::time(NULL)));
    int random_number = 0 + std::rand() % (2 - 0 + 1);
    return random_number;
}

Base *get_class(int class_number)
{
    Base *base;
    if (class_number == 0)
    {
        base = new A;
    }
    else if (class_number == 1)
    {
        base = new B;
    }
    else
        base = new C;
    return base;
}


Base * generate(void)
{
    int number = get_random_number();
    Classes class_number;
    if (number == 0)
        class_number = class_A;
    else if (number == 1)
        class_number = class_B;
    else
        class_number = class_C;
    return (get_class(class_number));
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout <<  "The type is : A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout <<  "The type is : B" << std::endl;
    else
        std::cout <<  "The type is : C" << std::endl;
}

void identify(Base& p)
{
    try {
        // Try to dynamic_cast the reference to each derived class type
        A& a = dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
    } catch (const std::bad_cast& e) {
        // If dynamic_cast fails, try the next derived class
        try {
            B& b = dynamic_cast<B&>(p);
            std::cout << "B" << std::endl;
        } catch (const std::bad_cast& e) {
            // If dynamic_cast still fails, assume it's of type C
            std::cout << "C" << std::endl;
        }
    }    
}