/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 17:59:43 by lshail            #+#    #+#             */
/*   Updated: 2024/01/27 16:38:23 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>

class Span
{
private:
    unsigned int N;
    std::vector<int> arr;

public:
    Span();
    ~Span();
    Span(unsigned int N);
    Span(const Span &obj);
    Span &operator=(const Span &obj);
    int shortestSpan();
    int longestSpan();
    void addNumber(int num);
    template <typename T>
    void addNumber(T begin, T end)
    {
        if (arr.size() + std::distance(begin , end) > N)
            throw std::exception();
        arr.insert(arr.end(), begin, end);
    }
};

#endif