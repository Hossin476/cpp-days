/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 15:07:16 by lshail            #+#    #+#             */
/*   Updated: 2023/12/14 12:33:21 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T, typename R>

void iter(T *array, size_t length, void f(R &))
{
    for (size_t i = 0; i < length; i++)
        f(array[i]);
}

#endif
