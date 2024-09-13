/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:33:33 by lshail            #+#    #+#             */
/*   Updated: 2023/11/30 15:21:28 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Character.hpp"

Character::Character()
{
    // std::cout << "Character Default constructor called" << std::endl;
    this->name = "weapon";
    for (int i = 0; i < 4; ++i)
        this->inventory[i] = NULL;
}

Character::Character(std::string name)
{
    this->name = name;
    for (int i = 0; i < 4; ++i)
        this->inventory[i] = NULL;
}

Character::~Character()
{
    // std::cout << "Character Destructor called" << std::endl;
    for (int i = 0; i < 4; ++i)
        if (this->inventory[i])
            delete this->inventory[i];
}

Character::Character(const Character &obj)
{
    // std::cout << "Character Copy constructor called" << std::endl;
    *this = obj;
}

Character &Character::operator=(const Character &obj)
{
    // std::cout << "Character assignement operator called" << std::endl;
    if (this != &obj)
    {
        this->name = obj.name;
        for (int i = 0; i < 4; ++i)
        {
            if (this->inventory[i] != NULL)
                delete this->inventory[i];
        }
        for (int i = 0; i < 4; ++i)
            *this->inventory[i] = *obj.inventory[i];
    }
    return *this;
}

std::string const &Character::getName() const
{
    return (this->name);
}

void Character::equip(AMateria *m)
{
    for (int i = 0; i < 4; ++i)
    {
        if (this->inventory[i] == NULL)
        {
            this->inventory[i] = m;
            return;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4 && this->inventory[idx] != NULL)
    {
        for (int i = 0; i < 4; ++i)
        {
            if (this->inventory[i] != NULL)
            {
                MateriaSource a;
                AMateria *ptr = this->inventory[idx];
                a.learnMateria(ptr);
                this->inventory[idx] = NULL;
                return;
            }
        }
    }
}

void Character::use(int idx, ICharacter &target)
{
    if (idx >= 0 && idx < 4 && inventory[idx] != NULL)
        inventory[idx]->use(target);
}