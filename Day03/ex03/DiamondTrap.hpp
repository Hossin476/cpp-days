/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:57:47 by lshail            #+#    #+#             */
/*   Updated: 2023/11/21 10:30:21 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "./ScavTrap.hpp"
#include "./FragTrap.hpp"

class DiamondTrap  : public FragTrap, public ScavTrap
{
    public:
    DiamondTrap();
    DiamondTrap(std::string name);
    ~DiamondTrap();
    DiamondTrap(const DiamondTrap& obj);
    DiamondTrap &operator=(const DiamondTrap &obj);


    void whoAmI();

    private:
    std::string name;
};

#endif