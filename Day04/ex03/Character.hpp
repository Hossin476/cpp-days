/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:33:35 by lshail            #+#    #+#             */
/*   Updated: 2023/11/26 21:57:20 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP


#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "MateriaSource.hpp"

class Character : public ICharacter
{
    public:
    Character();
    ~Character();
    Character(std::string name);
    Character(const Character &obj);
    Character &operator=(const Character &obj);

    std::string const &getName() const;
    void equip(AMateria *m);
    void unequip(int idx);
    void use(int idx, ICharacter &target);

    private:
    std::string name;
    AMateria *inventory[4];
};


#endif