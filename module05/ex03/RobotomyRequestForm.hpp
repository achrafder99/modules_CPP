/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 21:17:59 by adardour          #+#    #+#             */
/*   Updated: 2023/09/27 22:17:20 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm:public AForm {
    private:
        std::string target;
    public:
        RobotomyRequestForm(std::string target);
        // Default constructor
        RobotomyRequestForm();

        // Copy constructor
        RobotomyRequestForm(const RobotomyRequestForm& other);

        // Copy assignment operator
        RobotomyRequestForm& operator=(const RobotomyRequestForm& other);

        // Destructor
        ~RobotomyRequestForm();
        void    execute(Bureaucrat const & executor) const ;
};

#endif
