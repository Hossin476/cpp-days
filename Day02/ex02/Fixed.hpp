/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:10:57 by lshail            #+#    #+#             */
/*   Updated: 2023/12/04 11:53:43 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed &obj);
    Fixed &operator=(const Fixed &fixed);
    Fixed(const float fix);
    Fixed(const int nb);


    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt( void ) const;


    bool operator<(const Fixed &fixed) const;
    bool operator>(const Fixed &fixed) const;
    bool operator<=(const Fixed &fixed) const;
    bool operator>=(const Fixed &fixed) const;
    bool operator==(const Fixed &fixed) const;
    bool operator!=(const Fixed &fixed) const;
    Fixed operator+(const Fixed &fixed) const;
    Fixed operator-(const Fixed &fixed) const;
    Fixed operator*(const Fixed &fixed) const;
    Fixed operator/(const Fixed &fixed) const;
    Fixed &operator++();
    Fixed operator++(int);
    Fixed &operator--();
    Fixed operator--(int);  


    static Fixed& min (Fixed &fix1, Fixed &fix2);
    static Fixed& max (Fixed &fix1, Fixed &fix2);
    static Fixed& min ( const Fixed &fix1, const Fixed &fix2);
    static Fixed& max (const Fixed &fix1, const Fixed &fix2);

private:
    int value;
    static const int frac_bits ;
};

std::ostream &operator<<(std::ostream &strm, const Fixed &obj);

#endif