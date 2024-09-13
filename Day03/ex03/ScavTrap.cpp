/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 14:55:07 by lshail            #+#    #+#             */
/*   Updated: 2023/12/03 13:34:58 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap  Default constructor called" << std::endl;
    this->hit_pts = 100;
    this->energy_pts = 50;
    this->damage = 20;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap  Destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &obj) : ClapTrap(obj)
{
    std::cout << "ScavTrap  Copy constructor called" << std::endl;
    *this = obj;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &obj)
{
    std::cout << "ScavTrap  Copy assignement operator called" << std::endl;
    if (this != &obj)
    {
        this->damage = obj.damage;
        this->energy_pts = obj.energy_pts;
        this->hit_pts = obj.hit_pts;
    }
    return *this;
}

ScavTrap::ScavTrap(std::string name)
{
    this->name = name;
    this->hit_pts = 100;
    this->energy_pts = 50;
    this->damage = 20;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(std::string const &target)
{
    if (this->hit_pts == 0 || this->energy_pts == 0)
    {
        std::cout << "ScavTrap " << this->name << " is dead" << std::endl;
        return;
    }
    std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->damage << " points of damage!" << std::endl;
    this->energy_pts--;
}