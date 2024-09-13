/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 16:49:52 by lshail            #+#    #+#             */
/*   Updated: 2024/04/16 18:47:59 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


int main(int argc, char **argv)
{
    PmergeMe pmm;

    if (argc < 2)
    {
        std::cout << "Error" << std::endl;
        return 1;
    }
    if (!pmm.parse_elements(argv))
        return 1;
    pmm.print_vec_before();
    pmm.sort_vector();
    pmm.sort_deque();
    pmm.print_vec_after();
    pmm.printSortingTimeVector();
    pmm.printSortingTimeDeque();

    return 0;
}