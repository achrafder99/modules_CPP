/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:29:33 by adardour          #+#    #+#             */
/*   Updated: 2023/09/21 17:17:41 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

int main()
{
    Base* p = generate();
    identify(p);
    Base *p2 = generate();
    identify(p2);
    delete p;
    return (0);
}