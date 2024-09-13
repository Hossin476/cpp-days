/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:10:54 by lshail            #+#    #+#             */
/*   Updated: 2024/01/26 18:44:13 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Fixed.hpp"

const int Fixed::frac_bits = 8;

Fixed::Fixed()
{
    // std::cout << "Default constructor called" << std::endl;
    this->value = 0;
}

Fixed::Fixed(const Fixed &obj)
{
    // std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}
Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
    // std::cout << "Copy assignment operator called" << std::endl;
    if (this != &fixed)
    {
        this->value = fixed.value;
    }
    return *this;
}

Fixed::Fixed(const int fx)
{
    // std::cout << "Int constructor called" << std::endl;
    this->value = (fx * (1 << this->frac_bits));
}

Fixed::Fixed(const float fix)
{
    // std::cout << "Float constructor called" << std::endl;
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

bool Fixed::operator>(const Fixed &fixed) const
{
    return (this->value > fixed.value);
}

bool Fixed::operator<(const Fixed &fixed) const
{
    return (this->value < fixed.value);
}

bool Fixed::operator>=(const Fixed &fixed) const
{
    return (this->value >= fixed.value);
}

bool Fixed::operator<=(const Fixed &fixed) const
{
    return (this->value <= fixed.value);
}

bool Fixed::operator==(const Fixed &fixed) const
{
    return (this->value == fixed.value);
}

bool Fixed::operator!=(const Fixed &fixed) const
{
    return (this->value != fixed.value);
}

Fixed Fixed::operator+(const Fixed &fixed) const
{
    Fixed res;
    res.value = this->value + fixed.value;
    return res;
}

Fixed Fixed::operator-(const Fixed &fixed) const
{
    Fixed res;
    res.value = this->value - fixed.value;
    return res;
}

Fixed Fixed::operator*(const Fixed &fixed) const
{
    Fixed res;
    res.value = (this->value * fixed.value) / (1 << this->frac_bits);
    return res;
}

Fixed Fixed::operator/(const Fixed &fixed) const
{
    Fixed res;
    res.value = (this->value * (1 << this->frac_bits)) / fixed.value;
    return res;
}

Fixed &Fixed::operator++()
{
    this->value++;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed res(*this);
    operator++();
    return res;
}

Fixed &Fixed::operator--()
{
    this->value--;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed res(*this);
    operator--();
    return res;
}

Fixed &Fixed::min(Fixed &fix1, Fixed &fix2)
{
    if (fix1 < fix2)
        return fix1;
    else
        return fix2;
}

Fixed &Fixed::max(Fixed &fix1, Fixed &fix2)
{
    if (fix1 > fix2)
        return fix1;
    else
        return fix2;
}

Fixed &Fixed::min(const Fixed &fix1, const Fixed &fix2)
{
    if (fix1 < fix2)
        return (Fixed &)fix1;
    else
        return (Fixed &)fix2;
}

Fixed &Fixed::max(const Fixed &fix1, const Fixed &fix2)
{
    if (fix1 > fix2)
        return (Fixed &)fix1;
    else
        return (Fixed &)fix2;
}

std::ostream &operator<<(std::ostream &strm, const Fixed &obj)
{
    strm << obj.toFloat();

    return (strm);
}