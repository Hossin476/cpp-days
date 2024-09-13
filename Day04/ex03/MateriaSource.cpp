/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 12:19:34 by lshail            #+#    #+#             */
/*   Updated: 2023/11/28 15:43:42 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; ++i)
        this->learn[i] = NULL;
    // std::cout << "MateriaSource default constructor called" << std::endl;
}

MateriaSource::~MateriaSource()
{
    // std::cout << "MateriaSource destructor called" << std::endl;
    for (int i = 0; i < 4; ++i)
        if (this->learn[i])
            delete this->learn[i];
}

MateriaSource::MateriaSource(const MateriaSource &obj)
{
    // std::cout << "MateriaSource copy constructor called" << std::endl;
    *this = obj;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &obj)
{
    // std::cout << "MateriaSource assignement operator called" << std::endl;
    if (this != &obj)
    {
        for (int i = 0; i < 4; ++i)
        {
            if (this->learn[i] != NULL)
                delete this->learn[i];
        }
        for (int i = 0; i < 4; ++i)
            *this->learn[i] = *obj.learn[i];
    }
    return *this;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; ++i)
    {
        if (this->learn[i] != NULL && this->learn[i]->getType() == type)
            return this->learn[i]->clone();
    }
    return NULL;
}

void MateriaSource::learnMateria(AMateria *materia)
{
    for (int i = 0; i < 4; ++i)
    {
        if (this->learn[i] == NULL)
        {
            this->learn[i] = materia;
            return;
        }
    }
}