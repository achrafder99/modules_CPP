/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 19:58:44 by adardour          #+#    #+#             */
/*   Updated: 2023/09/20 21:48:09 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
    Data *data = new Data;
    data->value = 100;
    uintptr_t serialize_ptr = Serializer::serialize(data);
    Data *deserialize_ptr = Serializer::deserialize(serialize_ptr);

    if (data == deserialize_ptr)
        std::cout << "OK" << std::endl;
    else 
        std::cout << "KO" << std::endl;
    return 0;
}