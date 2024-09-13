/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:50:38 by lshail            #+#    #+#             */
/*   Updated: 2023/11/13 13:30:28 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "./ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    FragTrap();
    ~FragTrap();
    FragTrap(const FragTrap &obj);
    FragTrap operator=(const FragTrap &obj);
    FragTrap(std::string name);

    void highFivesGuys(void);
};

#endif