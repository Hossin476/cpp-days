/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:28:51 by lshail            #+#    #+#             */
/*   Updated: 2023/11/21 16:28:51 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Default constructor called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain Destructor called" << std::endl;
}

Brain::Brain(const Brain &obj)
{
    std::cout << "Brain Copy constructor called" << std::endl;
    *this = obj;
}

Brain &Brain::operator=(const Brain &obj)
{
    std::cout << "Brain assignement operator called" << std::endl;
    if (this != &obj)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = obj.ideas[i];
    }
    return *this;
}