/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 14:58:13 by lshail            #+#    #+#             */
/*   Updated: 2023/10/30 18:12:17 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef HARL_HPP
#define HARL_HPP

class Harl
{
public:
    Harl();
    ~Harl();
    void complain(std::string level);

private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
};

#endif