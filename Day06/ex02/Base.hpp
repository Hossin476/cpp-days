/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:24:44 by lshail            #+#    #+#             */
/*   Updated: 2023/12/11 15:47:46 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>

class Base
{
public:
    virtual ~Base();
};

    Base * generate(void);
    void identify(Base* p);
    void identify(Base& p);
#endif