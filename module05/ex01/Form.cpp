/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 19:54:05 by adardour          #+#    #+#             */
/*   Updated: 2023/09/27 21:04:21 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string& name, int grade_sign, int grade_execute)
    : name(name), is_signed(false), grade_sign(grade_sign), grade_execute(grade_execute) {

    if (grade_sign < 1 || grade_execute < 1)
    {
        throw Form::GradeTooHighException();   
    }  
    else if (grade_sign > 150 || grade_execute > 150)
    {
        throw Form::GradeTooLowException();   
    }        
}

Form::Form():name("default"), grade_sign(1), grade_execute(50), is_signed(false)
{
}

Form::Form(const Form& other)
    : is_signed(other.getIsSigned()), grade_sign(other.getGradeSign()), grade_execute(other.getGradeExecute()) {
    // Initialize other members of Form as needed
}

Form& Form::operator=(const Form& other) {
    if (this != &other) {
        this->is_signed = other.getIsSigned();
    }
    return *this;
}

Form::~Form() {
    // Destructor implementation
}

// Implement getters
const std::string& Form::getName() const {
    return this->name;
}

bool Form::getIsSigned() const {
    return is_signed;
}

int Form::getGradeSign() const {
    return grade_sign;
}

int Form::getGradeExecute() const {
    return grade_execute;
}

void    Form::beSigned(Bureaucrat &br)
{
    if (br.getGrade() >= this->grade_sign)
    {
        this->is_signed = true;
    }
    else
        throw Form::GradeTooLowException();
}

std::ostream& operator<< (std::ostream &out, const Form &c)
{
    out << "Form Name: " << c.getName() << "\n";
    out << "Grade sign :" << c.getGradeSign() << "\n";
    out << "Grade execute :" << c.getGradeExecute() << "\n";
    out << "Is Signed: " << (c.getIsSigned() ? "Yes" : "No") << "\n";
    return out;
}