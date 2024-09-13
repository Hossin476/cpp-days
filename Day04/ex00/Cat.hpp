/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:52:39 by lshail            #+#    #+#             */
/*   Updated: 2023/11/27 13:18:24 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "./Animal.hpp"

class Cat : public Animal
{
public:
    Cat();
    ~Cat();
    Cat(const Cat &obj);
    Cat &operator=(const Cat &obj);

    std::string getType(void) const;
    void makeSound() const;
};

#endif