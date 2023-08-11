/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 13:53:32 by adardour          #+#    #+#             */
/*   Updated: 2023/08/10 19:55:09 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    int i = 0;
    while(i < 4)
    {
        sources[i] = NULL;
        i++;
    }
}
MateriaSource::MateriaSource(const MateriaSource& materia_source)
{
    int i = 0;
    while (i < 4)
    {
        if (materia_source.sources[i])
        {
            sources[i] = materia_source.sources[i];   
        }
        else
            sources[i] = NULL;
        i++;
    }
    
}

MateriaSource& MateriaSource::operator=(const MateriaSource& materia_source)
{
    if (this == &materia_source)
        return (*this);   
    int i = 0;
    while(i < 4)
    {
        delete sources[i];
        sources[i] = NULL;   
        i++;
    }
    i = 0;
    while (i < 4)
    {
        if(materia_source.sources[i])
        {
            sources[i] = materia_source.sources[i]->clone();
        }
        else
            sources[i] = NULL;
        i++;
    }
    
    return (*this);
}

void MateriaSource::learnMateria(AMateria* materia)
{
    for (size_t i = 0; i < 4; i++)
    {
        if (!sources[i])
        {
            sources[i] = materia->clone();
            break;
        }
    }
    
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (size_t i = 0; i < 4; i++)
    {
        if (sources[i] && sources[i]->getType() == type)
        {
            return (sources[i]->clone());
        }
    }
    return 0;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; ++i) {
        delete sources[i];
    }

}