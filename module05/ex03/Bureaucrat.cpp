/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 02:39:47 by adardour          #+#    #+#             */
/*   Updated: 2023/09/27 22:50:08 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat(){
    // Default constructor implementation
}

Bureaucrat::Bureaucrat(std::string name, int grade): name(name), grade(grade)
{
    if (grade < 1)
    {
        throw GradeTooHighException();
    }
    else if (grade > 150)
    {
        throw GradeTooLowException();
    }
}

Bureaucrat::Bureaucrat(const Bureaucrat& other)
{
    if (this != &other)
    {
        this->grade = other.grade;
        this->name = other.name; 
    }
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
    if (this != &other) {
        this->grade = other.grade;
        this->name = other.name;
    }
    return *this;
}

Bureaucrat::~Bureaucrat() {
    // Destructor implementation
}

std::string Bureaucrat::getName()
{
    return (name);
}

int Bureaucrat::getGrade() const
{
    return (this->grade);
}

void    Bureaucrat::increment()
{
    if (this->grade <= 1)
    {
        throw GradeTooHighException();
    }
    else
        this->grade -= 1;
}

void    Bureaucrat::decrement()
{
    if (this->grade >= 150)
    {
        throw GradeTooLowException();
    }
    else
        this->grade += 1;
}

std::ostream& operator<< (std::ostream &out, Bureaucrat & c)
{
    std::cout << c.getName() << ", " << "bureaucrat grade " << c.getGrade();
    return (out);
}

void Bureaucrat::signForm(const AForm &form)
{
    if (form.getIsSigned())
    {
        std::cout << this->getName() << " signed " << form.getName() << std::endl;
    }
    else
        std::cout << this->getName() << " couldn’t sign " << form.getName() << "because ask china" << std::endl;
}

void Bureaucrat::executeForm(AForm const & aform)
{
    try {
            aform.execute(*this); 
            std::cout << this->getName() << " executed " << aform.getName() << std::endl;
        } catch (const std::exception& e) {
            std::cerr << "Execution failed: " << e.what() << std::endl;
        }
}