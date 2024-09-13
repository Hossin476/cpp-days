/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 11:57:26 by lshail            #+#    #+#             */
/*   Updated: 2023/10/25 14:13:32 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    if (N < 0)
        return (NULL);
    Zombie *zombie = new Zombie[N];
    for (int i = 0; i < N; i++)
        zombie[i].setName(name);
    return (zombie);
}