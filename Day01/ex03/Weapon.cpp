/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:34:17 by lshail            #+#    #+#             */
/*   Updated: 2023/10/25 16:05:26 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Weapon.hpp"

Weapon::Weapon(std::string type)
{
    this->type = type;
}


const std::string& Weapon::getType() const
{
    return (this->type);
}

void Weapon::setType(std::string type)
{
    this->type = type;
}