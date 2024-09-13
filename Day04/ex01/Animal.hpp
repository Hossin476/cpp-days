/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:49:07 by lshail            #+#    #+#             */
/*   Updated: 2023/11/28 15:54:26 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    public:
    Animal();
    virtual ~Animal();
    Animal(const Animal& obj);
    Animal &operator=(const Animal& obj);

    virtual void makeSound() const;
    std::string getType(void) const;

    protected:
    std::string type;
};

#endif