/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 14:32:41 by lshail            #+#    #+#             */
/*   Updated: 2023/11/21 17:33:39 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./DiamondTrap.hpp"

int main()
{
    DiamondTrap t;
    DiamondTrap dt("Enceladus");

    dt.attack("Jupiter");
    dt.takeDamage(60);
    dt.beRepaired(5);
    dt.whoAmI();
    return (0);
}