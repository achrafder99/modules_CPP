/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 19:54:05 by adardour          #+#    #+#             */
/*   Updated: 2023/09/27 21:36:11 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;
class AForm {
    private:
        const std::string name;
        bool is_signed;
        const int grade_sign;
        const int grade_execute;
    public:
        // Default constructor
        AForm();

        AForm(const std::string& name, int grade_sign, int grade_execute);

        // Copy constructor
        AForm(const AForm& other);

        // Copy assignment operator
        AForm& operator=(const AForm& other);

        // Destructor
        ~AForm();

        // getters 
        const std::string& getName() const;
        bool getIsSigned() const;
        int getGradeSign() const;
        int getGradeExecute() const;

        void    beSigned(Bureaucrat &br);
        virtual void execute(Bureaucrat const & executor) const = 0;

        class GradeTooHighException: public std::exception
        {
            virtual const char *what() const throw()
            {
                return "Grade AForm to Higher";
            }
        };
        class GradeTooLowException: public std::exception
        {
            virtual const char *what() const throw()
            {
                return "Grade AForm to Lower";
            }
        };

};

std::ostream& operator<< (std::ostream &out, const AForm &c);

#endif
