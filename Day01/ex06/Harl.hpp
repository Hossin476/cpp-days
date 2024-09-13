/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 18:10:12 by lshail            #+#    #+#             */
/*   Updated: 2023/10/29 12:47:06 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef HARL_HPP
#define HARL_HPP

class Harl
{
public:
    void complain(std::string level);
private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
};

#endif