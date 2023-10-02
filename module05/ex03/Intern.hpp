/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 01:19:09 by adardour          #+#    #+#             */
/*   Updated: 2023/09/28 01:34:24 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "AForm.hpp"

class Intern
{
    private:
        std::string  jobs[3];
    public:
        // Default constructor
        Intern();

        // Copy constructor
        Intern(const Intern& other);

        // Copy assignment operator
        Intern& operator=(const Intern& other);

        // Destructor
        ~Intern();

        // member function
        AForm *makeForm(const std::string &name, const std::string &target); 
};

#endif
