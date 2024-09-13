/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:28:28 by lshail            #+#    #+#             */
/*   Updated: 2023/11/21 16:28:28 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include "./Animal.hpp"

class WrongAnimal
{
public:
    WrongAnimal();
    ~WrongAnimal();
    WrongAnimal(const WrongAnimal &obj);
    WrongAnimal &operator=(const WrongAnimal &obj);

    void makeSound() const;
    std::string getType() const;

protected:
    std::string type;
};

#endif