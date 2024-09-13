/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 16:57:01 by lshail            #+#    #+#             */
/*   Updated: 2024/04/30 16:03:12 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
    // std::cout << "Constructor called" << std::endl;
}

PmergeMe::~PmergeMe()
{
    // std::cout << "Destructor called" << std::endl;
}

PmergeMe::PmergeMe(const PmergeMe &src)
{
    *this = src;
    // std::cout << "Copy constructor called" << std::endl;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &src)
{
    if (this != &src)
    {
        this->vec = src.vec;
        this->deq = src.deq;
    }
    return *this;
}

int PmergeMe::check_input(const std::string &str)
{
    for (size_t i = 1; i < str.length(); i++)
    {
        if (!std::isdigit(str[i]))
            return 0;
    }
    return 1;
}

int PmergeMe::parse_elements(char **argv)
{
    int i = 1;
    long value;

    dequeStart = std::clock();
    vectorStart = std::clock();
    while (argv[i])
    {
        value = std::atol(argv[i]);
        if (value < 1 || value > INT_MAX || !check_input(argv[i]))
        {
            std::cout << "Error" << std::endl;
            return 0;
        }
        else
        {
            deq.push_back(static_cast<int>(value));
            vec.push_back(static_cast<int>(value));
        }
        i++;
    }
    vecSize = vec.size();
    deqSize = deq.size();
    return 1;
}