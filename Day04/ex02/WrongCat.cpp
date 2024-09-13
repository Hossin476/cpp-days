/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:29:32 by lshail            #+#    #+#             */
/*   Updated: 2023/11/21 16:29:32 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat Default constructor called" << std::endl;
    this->type = "WrongCat";
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& obj) : WrongAnimal(obj)
{
    std::cout << "WrongCat Copy constructor called" << std::endl;
    *this = obj;
}

WrongCat &WrongCat::operator=(const WrongCat& obj)
{
    std::cout << "WrongCat assignement operator called" << std::endl;
    if (this != &obj)
    {
        this->type = obj.type;
    }
    return *this;
}

std::string WrongCat::getType() const
{
    return (this->type);
}

void WrongCat::makeSound() const
{
    std::cout << "Wrong cat sound" << std::endl;
}