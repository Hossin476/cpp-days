/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:52:42 by lshail            #+#    #+#             */
/*   Updated: 2023/11/28 15:52:42 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog Default constructor called" << std::endl;
    this->type = "Dog";
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called" << std::endl;
}

Dog::Dog(const Dog &obj)
{
    std::cout << "Dog Copy constructor called" << std::endl;
    *this = obj;
}

Dog &Dog::operator=(const Dog &obj)
{
    std::cout << "Dog Copy assignement operator called" << std::endl;
    if (this != &obj)
    {
        this->type = obj.type;
    }
    return *this;
}

std::string Dog::getType() const
{
    return this->type;
}

void Dog::makeSound() const
{
    std::cout << "Haw Haw " << std::endl;
}