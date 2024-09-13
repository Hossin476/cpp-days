/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:29:59 by lshail            #+#    #+#             */
/*   Updated: 2023/11/21 16:29:59 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cure.hpp"

Cure::Cure()
{
    // std::cout << "Cure Default constructor called" << std::endl;
    this->type = "cure";
}

Cure::~Cure()
{
    // std::cout << "Cure Destructor called" << std::endl;
}

Cure::Cure(const Cure &obj)
{
    // std::cout << "Cure Copy constructor called" << std::endl;
    *this = obj;
}

Cure &Cure::operator=(const Cure &obj)
{
    // std::cout << "Cure assignement operator called" << std::endl;
    if (this != &obj)
    {
        this->type = obj.type;
    }
    return *this;
}

AMateria *Cure::clone() const
{
    return (new Cure());
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " <<  target.getName() << "'s" << " wounds *" << std::endl;
}