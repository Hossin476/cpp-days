/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:34:20 by lshail            #+#    #+#             */
/*   Updated: 2023/10/25 17:27:12 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./Weapon.hpp"

#ifndef HUMANB_HPP
#define HUMANB_HPP

class HumanB
{
    public:
    HumanB(std::string name);
    ~HumanB();
    void attack();
    void setName(std::string name);
    void setWeapon(Weapon &weapon);
    private:
    std::string name;
    Weapon *weapon;
};


#endif