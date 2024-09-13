/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:37:40 by lshail            #+#    #+#             */
/*   Updated: 2023/10/25 11:48:46 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->name = name;
}

Zombie::~Zombie(void)
{
    std::cout << "Zombie " << this->name << " is dead" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << this->name <<  " BraiiiiiiinnnzzzZ..." << std::endl;
}