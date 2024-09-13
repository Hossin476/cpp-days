/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:47:01 by lshail            #+#    #+#             */
/*   Updated: 2023/11/29 15:52:05 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Animal.hpp"
#include "./Cat.hpp"
#include "./Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
    const Animal *j = new Dog();
    const Animal *i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    j->makeSound();
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    delete j; // should not create a leak
    delete i;

    Animal *animals[4];

    for (int i = 0; i < 4; ++i)
    {
        if (i < 4 / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    for (int i = 0; i < 4; ++i)
    {
        std::cout << animals[i]->getType() << std::endl;
        animals[i]->makeSound();
    }

    for (int i = 0; i < 4; ++i)
        delete animals[i];
    return 0;
}