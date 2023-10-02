/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 01:19:09 by adardour          #+#    #+#             */
/*   Updated: 2023/09/28 01:55:03 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {
    // Default constructor implementation
    this->jobs[0] = "shrubbery creation";
    this->jobs[1] = "robotomy request";
    this->jobs[2] = "presidential pardon";
}

Intern::Intern(const Intern& other)  {
    // Copy constructor implementation
    for (size_t i = 0; i < 3; i++)
    {
        this->jobs[i] = other.jobs[i];
    }
    
}

Intern& Intern::operator=(const Intern& other) {
    if (this != &other) {
        for (size_t i = 0; i < 3; i++)
        {
            this->jobs[i] = other.jobs[i];
        }
    }
    return *this;
}

Intern::~Intern() {
    // Destructor implementation
}

AForm *Intern::makeForm(const std::string &name, const std::string &target)
{
    AForm *form;
    form = NULL;
    for (size_t i = 0; i < 3; i++)
    {
        if (jobs[i] == "shrubbery creation")
        {
            form = new ShrubberyCreationForm(target);
        }
        else if (jobs[i] == "robotomy request")
        {
            form = new RobotomyRequestForm(target);
        }
        else if (jobs[i] == "presidential pardon")
        {
            form = new PresidentialPardonForm(target);
        }
    }
    if (form == NULL)
    {
        std::cout << "form name dont exist" << std::endl;
        return NULL;
    }
    std::cout << "Intern creates " << name << std::endl;
    return form;
}
