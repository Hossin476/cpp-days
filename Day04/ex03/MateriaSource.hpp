/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 12:19:37 by lshail            #+#    #+#             */
/*   Updated: 2023/11/26 12:31:11 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
public:
    MateriaSource();
    ~MateriaSource();
    MateriaSource(const MateriaSource &obj);
    MateriaSource &operator=(const MateriaSource &obj);

    AMateria *createMateria(std::string const &type);
    void learnMateria(AMateria *);

    private:
    AMateria *learn[4];
};

#endif