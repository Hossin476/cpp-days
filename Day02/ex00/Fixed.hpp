/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:53:16 by lshail            #+#    #+#             */
/*   Updated: 2023/12/03 13:31:20 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
    public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed &obj);
    Fixed& operator=(const Fixed& fixed);


    int getRawBits( void ) const;
    void setRawBits( int const raw );

    private:
    int value;
    static const int frac_bits;
};


#endif
