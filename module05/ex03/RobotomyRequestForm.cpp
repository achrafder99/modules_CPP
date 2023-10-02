/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 21:17:59 by adardour          #+#    #+#             */
/*   Updated: 2023/09/27 22:31:05 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>  // For random number generation
#include <ctime> 

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm(target, 72, 45), target(target)
{
    
}

RobotomyRequestForm::RobotomyRequestForm() {
    // Default constructor implementation
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) {
    // Copy constructor implementation
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
    if (this != &other) {
        // Copy assignment operator implementation
    }
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {
    // Destructor implementation
}


void    RobotomyRequestForm::execute(Bureaucrat const & executor) const 
{
    if (this->getIsSigned() && executor.getGrade() <= getGradeExecute())
    {
        std::cout << "Let's Make some drilling noises..." << std::endl;
        srand(static_cast<unsigned>(time(NULL)));
        bool success = rand() % 2 == 0;
        if (success)
        {
            std::cout << target << " has been robotomized successfully!" << std::endl;
        } else {
            std::cout << "Robotomy failed for " << target << "." << std::endl;
        }
    }
    else
        throw AForm::GradeTooLowException();
}