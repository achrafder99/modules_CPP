/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 19:54:05 by adardour          #+#    #+#             */
/*   Updated: 2023/09/27 20:59:35 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form {
    private:
        const std::string name;
        bool is_signed;
        const int grade_sign;
        const int grade_execute;
    public:
        // Default constructor
        Form();

        Form(const std::string& name, int grade_sign, int grade_execute);

        // Copy constructor
        Form(const Form& other);

        // Copy assignment operator
        Form& operator=(const Form& other);

        // Destructor
        ~Form();

        // getters 
        const std::string& getName() const;
        bool getIsSigned() const;
        int getGradeSign() const;
        int getGradeExecute() const;

        void    beSigned(Bureaucrat &br);

        class GradeTooHighException: public std::exception
        {
            virtual const char *what() const throw()
            {
                return "Grade Form to Higher";
            }
        };
        class GradeTooLowException: public std::exception
        {
            virtual const char *what() const throw()
            {
                return "Grade Form to Lower";
            }
        };
};

std::ostream& operator<< (std::ostream &out, const Form &c);

#endif
