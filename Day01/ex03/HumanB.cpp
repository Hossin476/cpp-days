/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:34:23 by lshail            #+#    #+#             */
/*   Updated: 2023/11/03 15:11:07 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
    this->weapon = 0;
  std::cout << "HumanB was initiated" << std::endl;
}

HumanB::~HumanB()
{
    std::cout << "HumanB was destroyed" << std::endl;
}

void HumanB::setName(std::string name)
{
    this->name = name;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}  

void HumanB::attack()
{
    if (weapon) 
        std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
    else
        std::cout << this->name << " attacks with their head" << std::endl;
}