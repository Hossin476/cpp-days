/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:24:41 by lshail            #+#    #+#             */
/*   Updated: 2023/12/13 13:05:43 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base() 
{
    // std::cout << "Base destructor called" << std::endl;
}

Base *generate(void)
{
    std::srand(time(NULL));
    int i = std::rand() % 3;
    if (i == 0)
        return (new A);
    else if (i == 1)
        return (new B);
    else
        return (new C);
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A from pointer" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B from pointer" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C from pointer" << std::endl;
}

void identify(Base& p)
{
    Base tmp;
    try
    {
        tmp = dynamic_cast<A&>(p);
        std::cout << "A from reference" << std::endl;
    }
    catch(std::bad_cast &e)
    {
        try
        {
            tmp = dynamic_cast<B&>(p);
            std::cout << "B from reference" << std::endl;
        }
        catch(std::bad_cast &e)
        {
            try
            {
                tmp = dynamic_cast<C&>(p);
                std::cout << "C from reference" << std::endl;
            }
            catch(std::bad_cast &e)
            {
                std::cout << "p is not a pointer to A, B, or C: " << e.what() << std::endl;
            }
        }
    }
}