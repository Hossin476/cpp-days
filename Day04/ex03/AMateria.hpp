/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:29:55 by lshail            #+#    #+#             */
/*   Updated: 2023/11/21 16:29:55 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;
class AMateria
{
protected:
    std::string type;

public:
    AMateria();
    virtual ~AMateria();
    AMateria(const AMateria &obj);
    AMateria &operator=(const AMateria &obj);
    AMateria(std::string const &type);
    std::string const &getType() const; // Returns the materia type
    virtual AMateria *clone() const = 0;
    virtual void use(ICharacter &target) ;
};

#endif