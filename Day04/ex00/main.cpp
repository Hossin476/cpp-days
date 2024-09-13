/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:46:32 by lshail            #+#    #+#             */
/*   Updated: 2023/11/22 15:01:30 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Animal.hpp"
#include "./Cat.hpp"
#include "./Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    const WrongAnimal *f = new WrongCat();
    const WrongAnimal *g = new WrongAnimal();

    std::cout << j->getType() << " " << std::endl;
    j->makeSound();
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); // will output the cat sound!
    std::cout << meta->getType() << " " << std::endl;
    meta->makeSound();
    std::cout << f->getType() << " " << std::endl;
    f->makeSound();
    std::cout << g->getType() << " " << std::endl;
    g->makeSound();

    delete meta;
    delete j;
    delete i;
    delete f;
    delete g;

    return 0;
}