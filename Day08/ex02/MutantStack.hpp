/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 17:59:51 by lshail            #+#    #+#             */
/*   Updated: 2024/02/24 13:10:22 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <stack>
#include <list>
#include <deque>

template <class T>

class MutantStack : public std::stack<T>
{
public:
    MutantStack() {}
    ~MutantStack() {}
    MutantStack(const MutantStack &obj)
    {
        *this = obj;
    }
    MutantStack &operator=(const MutantStack &obj)
    {
        if (this != &obj)
            std::stack<T>::operator=(obj);
        return *this;
    }
    typedef typename  std::deque<T>::iterator iterator;

    iterator begin()
    {
        return std::stack<T>::c.begin();
    }
    iterator end()
    {
        return std::stack<T>::c.end();
    }
};

#endif
