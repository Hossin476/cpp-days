/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 11:59:29 by lshail            #+#    #+#             */
/*   Updated: 2023/10/25 14:14:45 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

int main()
{
    Zombie *zombie = zombieHorde(5, "Ganymede");
    if (!zombie)
        return (0);
    for (int i = 0; i < 5; i++)
        zombie->announce();
    delete[] zombie;
    return (0);
}