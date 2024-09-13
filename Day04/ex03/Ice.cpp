/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:30:07 by lshail            #+#    #+#             */
/*   Updated: 2023/11/21 16:30:07 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Ice.hpp"

Ice::Ice()
{
    // std::cout << "Ice Default constructor called" << std::endl;
    this->type = "ice";
}

Ice::~Ice()
{
    // std::cout << "Ice Destructor called" << std::endl;
}

Ice::Ice(const Ice &obj)
{
    // std::cout << "Ice Copy constructor called" << std::endl;
    *this = obj;
}

Ice &Ice::operator=(const Ice &obj)
{
    // std::cout << "Ice assignement operator called" << std::endl;
    if (this != &obj)
    {
        this->type = obj.type;
    }
    return *this;
}

AMateria *Ice::clone() const
{
    return (new Ice());
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}