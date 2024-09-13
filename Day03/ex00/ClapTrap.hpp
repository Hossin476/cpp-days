/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 14:33:38 by lshail            #+#    #+#             */
/*   Updated: 2023/11/22 18:33:41 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
public:
    ClapTrap();
    ClapTrap(std::string name);
    ~ClapTrap();
    ClapTrap(const ClapTrap &obj);
    ClapTrap &operator=(const ClapTrap &obj);


    void        attack(const std::string &target);
    void        takeDamage(unsigned int amount);
    void        beRepaired(unsigned int amount);

private:
    std::string name;
    int         hit_pts;
    int         energy_pts;
    int         damage;
};

#endif