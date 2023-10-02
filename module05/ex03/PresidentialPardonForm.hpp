/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 21:21:04 by adardour          #+#    #+#             */
/*   Updated: 2023/09/27 22:34:48 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm: public AForm {
    private:
        std::string target;
    public:
        PresidentialPardonForm(std::string target);
        // Default constructor
        PresidentialPardonForm();

        // Copy constructor
        PresidentialPardonForm(const PresidentialPardonForm& other);

        // Copy assignment operator
        PresidentialPardonForm& operator=(const PresidentialPardonForm& other);

        // Destructor
        ~PresidentialPardonForm();

        void execute(Bureaucrat const & executor) const;
};

#endif
