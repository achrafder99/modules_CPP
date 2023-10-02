/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 19:22:27 by adardour          #+#    #+#             */
/*   Updated: 2023/09/27 22:52:34 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    try
    {
        Bureaucrat bureaucrat("John", 70);
        ShrubberyCreationForm shrubberyForm("home");
        RobotomyRequestForm robotomyForm("target");
        PresidentialPardonForm pardonForm("someone");

        bureaucrat.signForm(shrubberyForm);
        bureaucrat.signForm(robotomyForm);
        bureaucrat.signForm(pardonForm);

        bureaucrat.executeForm(shrubberyForm);
        bureaucrat.executeForm(robotomyForm);
        bureaucrat.executeForm(pardonForm);
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}