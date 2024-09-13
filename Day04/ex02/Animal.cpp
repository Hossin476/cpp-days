/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:49:05 by lshail            #+#    #+#             */
/*   Updated: 2023/11/28 11:46:29 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal Default constructor called" << std::endl;
    this->type = "Animal";
} 

Animal::~Animal()
{
    std::cout << "Animal Destructor called" << std::endl;
}

Animal::Animal(const Animal &obj)
{
    std::cout << "Animal Copy constructor called" << std::endl;
    *this = obj;
}

Animal &Animal::operator=(const Animal &obj)
{
    std::cout << "Animal Copy assignement operator called" << std::endl;
    if (this != &obj)
    {
        this->type = obj.type;
    }
    return *this;
}

std::string Animal::getType(void) const
{
    return this->type;
}