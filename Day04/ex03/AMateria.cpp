/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:29:51 by lshail            #+#    #+#             */
/*   Updated: 2023/11/21 16:29:51 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
    // std::cout << "AMateria Default constructor called" << std::endl;
}

AMateria::~AMateria()
{
    // std::cout << "AMateria Destructor called" << std::endl;
}

AMateria::AMateria(std::string const &type)
{
    this->type = type;
}

AMateria::AMateria(const AMateria &obj)
{
    // std::cout << "AMateria Copy constructor called" << std::endl;
    *this = obj;
}

AMateria &AMateria::operator=(const AMateria &obj)
{
    // std::cout << "AMateria assignemet operator called" << std::endl;
    if (this != &obj)
    {
        this->type = obj.type;
    }
    return *this;
}

void AMateria::use(ICharacter &target)
{
    std::cout << "amateria use method overridden on " << target.getName() << std::endl;
}

std::string const &AMateria::getType() const
{
    return (this->type);
}