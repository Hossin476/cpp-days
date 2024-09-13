/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:27:57 by lshail            #+#    #+#             */
/*   Updated: 2023/11/21 16:27:57 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
public:
    Brain();
    ~Brain();
    Brain(const Brain &obj);
    Brain &operator=(const Brain &obj);

private:
    std::string ideas[100];
};

#endif