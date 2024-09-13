/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:53:16 by lshail            #+#    #+#             */
/*   Updated: 2024/02/06 17:58:13 by lshail           ###   ########.fr       */
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


private:
    int value;
    static const int frac_bits;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);



#endif

