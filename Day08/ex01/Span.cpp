/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 17:59:41 by lshail            #+#    #+#             */
/*   Updated: 2024/01/17 16:08:21 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : N(0) 
{
    // std::cout << "Span default constructor called" << std::endl;
}

Span::Span(unsigned int N) : N(N)
{
}

Span::Span(const Span &obj)
{
    // std::cout << "Span copy constructor called" << std::endl;
    *this = obj;
}

Span &Span::operator=(const Span &obj)
{
    // std::cout << "Span assignation operator called" << std::endl;
    if (this != &obj)
    {
        this->N = obj.N;
        this->arr = obj.arr;
    }
    return *this;
}

Span::~Span()
{
    // std::cout << "Span destructor called" << std::endl;
}

int Span::shortestSpan()
{
    if (arr.size() < 2)
        throw std::exception();
    std::vector<int> tmp = arr;
    std::sort(tmp.begin(), tmp.end());

    int minSpan = INT_MAX;
    std::vector<int>::iterator it;
    for (it = tmp.begin() + 1; it != tmp.end(); it++)
    {
        if (*it - *(it - 1) < minSpan)
            minSpan = *it - *(it - 1);
    }
    return minSpan;
}

int Span::longestSpan()
{
    if (arr.size() < 2)
        throw std::exception();
    std::vector<int> tmp = arr;
    std::sort(tmp.begin(), tmp.end());
    return tmp.back() - tmp.front();
}

void Span::addNumber(int num)
{
    if (arr.size() + 1 > N)
        throw std::exception();
    arr.push_back(num);
}