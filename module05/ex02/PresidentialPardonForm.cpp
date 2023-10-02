/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 21:21:04 by adardour          #+#    #+#             */
/*   Updated: 2023/09/27 22:41:07 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <stdio.h>

PresidentialPardonForm::PresidentialPardonForm(std::string target):AForm(target, 25, 5), target(target)
{
    
}

PresidentialPardonForm::PresidentialPardonForm() {
    // Default constructor implementation
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) {
    // Copy constructor implementation
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other) {
    if (this != &other) {
        // Copy assignment operator implementation
    }
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {
    // Destructor implementation
}


void PresidentialPardonForm::execute(Bureaucrat const & executor) const 
{
    if (getIsSigned() && executor.getGrade() <= getGradeExecute())
    {
        std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
    }
    else
        throw AForm::GradeTooLowException();
}