/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 14:32:36 by lshail            #+#    #+#             */
/*   Updated: 2023/11/21 17:33:24 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./FragTrap.hpp"


int main()
{
    FragTrap t;
    FragTrap q("test");
    
    q.attack("hello");
    q.beRepaired(10);
    q.takeDamage(20);
    q.highFivesGuys();
}