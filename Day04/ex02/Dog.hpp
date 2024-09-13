/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:52:45 by lshail            #+#    #+#             */
/*   Updated: 2023/11/27 13:21:07 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "./Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
public:
    Dog();
    ~Dog();
    Dog(const Dog &obj);
    Dog &operator=(const Dog &obj);

    std::string getType(void) const;
    void makeSound() const;

private:
    Brain *brain;
};

#endif