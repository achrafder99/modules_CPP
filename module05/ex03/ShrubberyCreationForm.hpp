/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 21:17:49 by adardour          #+#    #+#             */
/*   Updated: 2023/09/27 22:03:29 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <stdio.h>
#include <fstream>

class ShrubberyCreationForm:public AForm
{
    private:
        std::string target;
    public:
        // Default constructor
        ShrubberyCreationForm();

        ShrubberyCreationForm(std::string target);

        // Copy constructor
        ShrubberyCreationForm(const ShrubberyCreationForm& other);

        // Copy assignment operator
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);

        // Destructor
        ~ShrubberyCreationForm();

        void    execute(Bureaucrat const & executor) const;
    };

#endif
