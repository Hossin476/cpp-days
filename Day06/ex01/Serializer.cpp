/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:21:14 by lshail            #+#    #+#             */
/*   Updated: 2023/12/07 17:14:37 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
    std::cout << "Default constructor called" << std::endl;
}

Serializer::~Serializer()
{
    std::cout << "Destructor called" << std::endl;
}

Serializer::Serializer(Serializer const &obj)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}

Serializer &Serializer::operator=(Serializer const &obj)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &obj)
    {
    }
    return (*this);
}

uintptr_t Serializer::serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data*>(raw));
}
