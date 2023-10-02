/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 19:54:05 by adardour          #+#    #+#             */
/*   Updated: 2023/09/27 22:01:58 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(const std::string& name, int grade_sign, int grade_execute)
    : name(name), is_signed(false), grade_sign(grade_sign), grade_execute(grade_execute) {

    if (grade_sign < 1 || grade_execute < 1)
    {
        throw AForm::GradeTooHighException();   
    }  
    else if (grade_sign > 150 || grade_execute > 150)
    {
        throw AForm::GradeTooLowException();   
    }        
}

AForm::AForm():name("default"), grade_sign(1), grade_execute(50), is_signed(false)
{
}

AForm::AForm(const AForm& other)
    : is_signed(other.getIsSigned()), grade_sign(other.getGradeSign()), grade_execute(other.getGradeExecute()) {
    // Initialize other members of AForm as needed
}

AForm& AForm::operator=(const AForm& other) {
    if (this != &other) {
        this->is_signed = other.getIsSigned();
    }
    return *this;
}

AForm::~AForm() {
    // Destructor implementation
}

// Implement getters
const std::string& AForm::getName() const {
    return this->name;
}

bool AForm::getIsSigned() const {
    return is_signed;
}

int AForm::getGradeSign() const {
    return grade_sign;
}

int AForm::getGradeExecute() const {
    return grade_execute;
}

void    AForm::beSigned(Bureaucrat &br)
{
    if (br.getGrade() <= this->grade_sign)
    {
        this->is_signed = true;
    }
    else
        throw AForm::GradeTooLowException();
}

std::ostream& operator<< (std::ostream &out, const AForm &c)
{
    out << "AForm Name: " << c.getName() << "\n";
    out << "Grade sign :" << c.getGradeSign() << "\n";
    out << "Grade execute :" << c.getGradeExecute() << "\n";
    out << "Is Signed: " << (c.getIsSigned() ? "Yes" : "No") << "\n";
    return out;
}