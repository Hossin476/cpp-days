/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:52:37 by lshail            #+#    #+#             */
/*   Updated: 2023/11/28 18:31:58 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat Default constructor called" << std::endl;
    this->type = "Cat";
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called" << std::endl;
}

Cat::Cat(const Cat &obj)
{
    std::cout << "Cat Copy constructor called" << std::endl;
    *this = obj;
}

Cat &Cat::operator=(const Cat &obj)
{
    std::cout << "Cat Copy assignement operator called" << std::endl;
    if (this != &obj)
    {
        this->type = obj.type;
    }
    return *this;
}

std::string Cat::getType() const
{
    return this->type;
}

void Cat::makeSound() const
{
    std::cout << "Myaw Myaw " << std::endl;
}