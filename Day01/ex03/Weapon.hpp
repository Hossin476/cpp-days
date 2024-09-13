/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:34:15 by lshail            #+#    #+#             */
/*   Updated: 2023/10/25 17:32:17 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef WEAPON_HPP
#define WEAPON_HPP

class Weapon
{
    public:
    Weapon(std::string type);
    const std::string& getType() const;
    void setType(std::string type);
    private:
    std::string type;
};


#endif