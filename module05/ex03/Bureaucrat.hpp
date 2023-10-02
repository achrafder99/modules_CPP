/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 02:39:47 by adardour          #+#    #+#             */
/*   Updated: 2023/09/27 22:43:39 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "AForm.hpp"

class AForm;
class Bureaucrat
{
    private:
        std::string name;
        int grade;
    public:
        // Exceptions
        class GradeTooHighException: public std::exception
        {
            public:
                virtual const char *what() const throw()
                {
                    return "Grade to Higher";
                }
        };
        class GradeTooLowException: public std::exception
        {
            public:
                virtual const char *what() const throw()
                {
                    return "Grade to Lower";
                }
        };

        // Default constructor
        Bureaucrat();

        Bureaucrat(std::string name, int grade);

        // Copy constructor
        Bureaucrat(const Bureaucrat& other);

        // Copy assignment operator
        Bureaucrat& operator=(const Bureaucrat& other);

        // Destructor
        ~Bureaucrat();

        //getters
        std::string getName();
        int getGrade() const;

        void increment();
        void decrement();

        void signForm(const AForm &form);
        void executeForm(AForm const & aform);
};

std::ostream& operator<<(std::ostream &out, Bureaucrat  & c);

#endif
