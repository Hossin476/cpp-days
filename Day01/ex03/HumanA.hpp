/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:34:26 by lshail            #+#    #+#             */
/*   Updated: 2023/10/25 16:31:39 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./Weapon.hpp"

#ifndef HUMANA_HPP
#define HUMANA_HPP

class HumanA
{
public:
    HumanA(std::string name,Weapon& weapon);
    ~HumanA();
    void attack();
    void setName(std::string name);
private:
    std::string name;
    Weapon& weapon;
};

#endif