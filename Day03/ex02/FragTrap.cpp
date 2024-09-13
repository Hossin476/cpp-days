/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:50:36 by lshail            #+#    #+#             */
/*   Updated: 2023/12/03 13:34:07 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap Default constructor called" << std::endl;
    this->hit_pts = 100;
    this->damage = 30;
    this->energy_pts = 100;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &obj)
{
    std::cout << "FragTrap Copy constructor called" << std::endl;
    *this = obj;
}

FragTrap FragTrap::operator=(const FragTrap &obj)
{
    std::cout << "FragTrap assignement operator called" << std::endl;
    if (this != &obj)
    {
        this->hit_pts = obj.hit_pts;
        this->damage = obj.damage;
        this->energy_pts = obj.energy_pts;
    }
    return *this;
}

FragTrap::FragTrap(std::string name)
{
    this->name = name;
    this->hit_pts = 100;
    this->damage = 30;
    this->energy_pts = 100;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "High Five Guys" << std::endl;
}