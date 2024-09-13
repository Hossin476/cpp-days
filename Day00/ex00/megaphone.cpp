/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:04:55 by lshail            #+#    #+#             */
/*   Updated: 2023/10/11 14:29:10 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    int i;
    int j;

    i = 1;
    if (argc > 1)
    {
        while (i < argc)
        {
            j = 0;
            std::string ar = argv[i];
            while (ar[j])
            {
                std::cout << (char)std::toupper(ar[j]);
                j++;
            }
            i++;
        }
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout << std::endl;
    return (0);
}
