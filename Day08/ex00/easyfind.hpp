/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 17:59:33 by lshail            #+#    #+#             */
/*   Updated: 2023/12/20 14:45:07 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template <typename T>

void easyfind(T &container, int n)
{
    if (std::find(container.begin(), container.end(), n) != container.end())
        std::cout << "Element " << n << " Found!" << std::endl;
    else
        throw std::exception();
}



#endif