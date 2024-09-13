/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:52:37 by lshail            #+#    #+#             */
/*   Updated: 2023/11/28 15:53:21 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat Default constructor called" << std::endl;
    this->type = "Cat";
    this->brain = new Brain();
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called" << std::endl;
    delete this->brain;
}

Cat::Cat(const Cat &obj) : brain(NULL)
{
    std::cout << "Cat Copy constructor called" << std::endl;
    *this = obj;
}

Cat &Cat::operator=(const Cat &obj)
{
    std::cout << "Cat assignement operator called" << std::endl;
    if (this != &obj)
    {
        if(this->brain)
            delete this->brain;
        this->brain = new Brain();
        *this->brain = *obj.brain;
        this->type = obj.type;
    }
    return *this;
}

std::string Cat::getType() const
{
    return (this->type);
}

void Cat::makeSound() const
{
    std::cout << "Myaw Myaw " << std::endl;
}