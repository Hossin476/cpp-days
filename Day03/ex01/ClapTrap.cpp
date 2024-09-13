/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 14:33:40 by lshail            #+#    #+#             */
/*   Updated: 2023/12/03 13:33:42 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ClapTrap.hpp"

ClapTrap::ClapTrap() : hit_pts(10), energy_pts(10), damage(0)
{
    std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : hit_pts(10), energy_pts(10), damage(0)
{
    this->name = name;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
    std::cout << "ClapTrap Copy constructor called" << std::endl;
    *this = obj;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &obj)
{
    std::cout << "ClapTrap Copy assignment operator called" << std::endl;
    if (this != &obj)
    {
        this->name = obj.name;
        this->damage = obj.damage;
        this->hit_pts = obj.hit_pts;
        this->energy_pts = obj.energy_pts;
    }
    return *this;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hit_pts == 0 || this->energy_pts == 0)
    {
        std::cout << "ClapTrap " << this->name << " is already dead" << std::endl;
        return;
    }
    else if (amount > (unsigned int)this->hit_pts)
    {
        std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage!" << std::endl;
        this->hit_pts = 0;
        std::cout << "ClapTrap " << this->name << " is dead" << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage!" << std::endl;
        this->hit_pts -= amount;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->hit_pts == 0 || this->energy_pts == 0)
    {
        std::cout << "ClapTrap " << this->name << " is already dead" << std::endl;
        return;
    }
    else if (this->hit_pts + amount > 10)
    {
        std::cout << "ClapTrap " << this->name << " is fully repaired" << std::endl;
        this->hit_pts = 10;
    }
    else
    {
        std::cout << "ClapTrap " << this->name << " is repaired by " << amount << " points" << std::endl;
        this->hit_pts += amount;
    }
}

void ClapTrap::attack(std::string const &target)
{
    if (this->hit_pts == 0 || this->energy_pts == 0)
    {
        std::cout << "ClapTrap " << this->name << " is dead" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->damage << " points of damage!" << std::endl;
    this->energy_pts--;
}