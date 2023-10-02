/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 21:17:49 by adardour          #+#    #+#             */
/*   Updated: 2023/09/27 22:07:44 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm(target, 145, 137), target(target)
{
    
}

ShrubberyCreationForm::ShrubberyCreationForm() {
    // Default constructor implementation
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) {
    // Copy constructor implementation
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
    if (this != &other) {
        // Copy assignment operator implementation
    }
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    // Destructor implementation
}


void    ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (getIsSigned() && executor.getGrade() <= getGradeExecute())
    {
        std::string filename = target + "_shrubbery.txt";
        std::string ascii_tree = 
            "   ^\n"
            "  ^^^\n"
            " ^^^^^\n"
            "^^^^^^^\n";
        std::ofstream outFile(filename.c_str());
        if (!outFile) {
            std::cerr << "Error opening the file for writing." << std::endl;
        }

        outFile << ascii_tree;

        outFile.close();

        std::cout << "File '" << filename << "' has been created with ASCII trees." << std::endl;
    }
    else
        throw AForm::GradeTooLowException();
}