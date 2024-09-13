/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 15:05:16 by lshail            #+#    #+#             */
/*   Updated: 2023/12/17 17:10:08 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    try
    {
        Array<int> intArray(5);

        for (unsigned int i = 0; i < intArray.size(); ++i)
            intArray[i] = i * 10;

        std::cout << "Array of integers: ";
        for (unsigned int i = 0; i < intArray.size(); ++i)
            std::cout << intArray[i] << " ";

        std::cout << std::endl;

        Array<double> doubleArray(3);
        for (unsigned int i = 0; i < doubleArray.size(); ++i)
            doubleArray[i] = i + 0.5;

        std::cout << "Array of doubles: ";
        for (unsigned int i = 0; i < doubleArray.size(); ++i)
            std::cout << doubleArray[i] << " ";

        std::cout << std::endl;

        Array<std::string> stringArray(2);
        stringArray[0] = "Hello";
        stringArray[1] = "World";

        std::cout << "Array of strings: ";
        for (unsigned int i = 0; i < stringArray.size(); ++i)
            std::cout << stringArray[i] << " ";

        std::cout << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
