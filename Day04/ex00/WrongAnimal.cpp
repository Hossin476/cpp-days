/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:27:02 by lshail            #+#    #+#             */
/*   Updated: 2023/11/21 16:27:02 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal Default constructor called" << std::endl;
    this->type = "WrongAnimal";
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
    std::cout << "WrongAnimal Copy constructor called" << std::endl;
    *this = obj;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &obj)
{
    std::cout << "WrongAnimal copy assignement operator called" << std::endl;
    if (this != &obj)
    {
        this->type = obj.type;
    }
    return *this;
}

std::string WrongAnimal::getType() const
{
    return (this->type);
}

void WrongAnimal::makeSound() const
{
    std::cout << "Wrong animal sound" << std::endl;
}