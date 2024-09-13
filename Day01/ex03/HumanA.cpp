/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:34:28 by lshail            #+#    #+#             */
/*   Updated: 2023/10/25 16:35:56 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon): name(name), weapon(weapon)
{
  std::cout << weapon.getType() << " was initiated" << std::endl;
}

HumanA::~HumanA()
{
    std::cout << weapon.getType() << " was destroyed" << std::endl;
}

void HumanA::setName(std::string name)
{
    this->name = name;
}

void HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}