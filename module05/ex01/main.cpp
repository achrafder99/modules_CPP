/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 19:22:27 by adardour          #+#    #+#             */
/*   Updated: 2023/09/27 21:06:03 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat bureaucrat1("John", 1);
        Bureaucrat bureaucrat2("Alice", 5);
        Bureaucrat bureaucrat3("Bob", 10);

        Form form1("Tax Form", 50, 25);
        Form form2("License Form", 1, 1);

        std::cout << bureaucrat1 << std::endl;
        std::cout << bureaucrat2 << std::endl;
        std::cout << bureaucrat3 << std::endl;

        std::cout << form1 << std::endl;
        std::cout << form2 << std::endl;

        bureaucrat2.signForm(form1);
        bureaucrat1.signForm(form2);

        form1.beSigned(bureaucrat1);
        form2.beSigned(bureaucrat2);

        std::cout << bureaucrat1 << std::endl;
        std::cout << bureaucrat2 << std::endl;
        std::cout << bureaucrat3 << std::endl;

        std::cout << form1 << std::endl;
        std::cout << form2 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}