/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:37:43 by lshail            #+#    #+#             */
/*   Updated: 2023/10/25 13:04:59 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
public:
    Zombie(std::string name);
    Zombie();
    ~Zombie(void);
    void announce(void);
    void setName(std::string name);

private:
    std::string name;
};

Zombie *zombieHorde(int N, std::string name);

#endif