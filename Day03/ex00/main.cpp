/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 14:32:25 by lshail            #+#    #+#             */
/*   Updated: 2023/11/21 10:28:24 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ClapTrap.hpp"


int main()
{
    ClapTrap a;
    ClapTrap b("hello");

    b.attack("Test");
    b.takeDamage(5);
    b.beRepaired(5);
    return 0;
}