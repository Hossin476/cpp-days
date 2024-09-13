/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:04:24 by lshail            #+#    #+#             */
/*   Updated: 2024/02/06 17:58:02 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Fixed.hpp"

const int Fixed::frac_bits = 8;

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->value = 0;
}

Fixed::Fixed(const Fixed &obj)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &fixed)
    {
        this->value = fixed.value;
    }
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int fx)
{
    std::cout << "Int constructor called" << std::endl;
    this->value = (fx * (1 << this->frac_bits));
}

Fixed::Fixed(const float fix)
{
    std::cout << "Float constructor called" << std::endl;
    this->value = roundf(fix * (1 << this->frac_bits));
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->value;
}

void Fixed::setRawBits(int const raw)
{
    this->value = raw;
}

float Fixed::toFloat(void) const
{
    return (((float)this->value / (1 << this->frac_bits)));
}

int Fixed::toInt(void) const
{
    return (this->value / (1 << this->frac_bits));
}

std::ostream &operator<<(std::ostream &strm, const Fixed &obj)
{
    strm << obj.toFloat();

    return (strm);
}