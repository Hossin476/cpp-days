/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:57:44 by lshail            #+#    #+#             */
/*   Updated: 2023/12/03 13:34:41 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "DiamondTrap  Default constructor called" << std::endl;
    this->FragTrap::hit_pts = 100;
    this->ScavTrap::energy_pts = 50;
    this->FragTrap::damage = 20;
}

DiamondTrap::DiamondTrap(std::string name)
{
    this->name = name;
    this->FragTrap::hit_pts = 100;
    this->ScavTrap::energy_pts = 50;
    this->FragTrap::damage = 20;
    ClapTrap::name = name + "_clap_name";
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap  Destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &obj)
{
    std::cout << "DiamondTrap  Copy constructor called" << std::endl;
    *this = obj;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &obj)
{
    std::cout << "DiamondTrap  Copy assignement operator called" << std::endl;
    if (this != &obj)
    {
        this->FragTrap::damage = obj.FragTrap::damage;
        this->FragTrap::hit_pts = obj.FragTrap::hit_pts;
        this->ScavTrap::energy_pts = obj.ScavTrap::energy_pts;
    }
    return *this;
}

void DiamondTrap::whoAmI()
{
    std::cout << "My name is " << this->name << " " << ClapTrap::name << std::endl;
}