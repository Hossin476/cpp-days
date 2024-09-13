/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 17:13:54 by lshail            #+#    #+#             */
/*   Updated: 2023/12/17 11:21:20 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <class T>

class Array
{
private:
    unsigned int n;
    T *arr;

public:
    Array() : n(0), arr(NULL) {}
    Array(unsigned int n) : n(n), arr(new T[n]) {}
    Array(const Array &obj): n(0), arr(NULL)
    {
        *this = obj;
    }
    Array &operator=(const Array &obj)
    {
        if (this != &obj)
        {
            this->n = obj.n;
            if (this->arr)
                delete[] this->arr;
            this->arr = new T[n];
            for (unsigned int i = 0; i < n; i++)
                this->arr[i] = obj.arr[i];
        }
        return (*this);
    }
    T &operator[](unsigned int index)
    {
        if (index >= n)
            throw std::exception();
        return (arr[index]);
    }
    ~Array()
    {
        if (this->arr)
            delete[] this->arr;
    }
    unsigned int size(void) const
    {
        return (n);
    }
};

#endif