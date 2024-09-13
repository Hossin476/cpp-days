/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:37:43 by lshail            #+#    #+#             */
/*   Updated: 2023/10/25 11:47:23 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
public:
    Zombie(std::string name);
    ~Zombie(void);
    void announce(void);

private:
    std::string name;
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif