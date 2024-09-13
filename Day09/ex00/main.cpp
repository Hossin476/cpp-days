/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 16:49:37 by lshail            #+#    #+#             */
/*   Updated: 2024/03/06 17:16:59 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    BitcoinExchange exchange;
    std::string filename;

    filename = "data.csv";

    if (argc != 2)
    {
        std::cout << "Usage: ./bitcoin [file]" << std::endl;
        return (1);
    }
    try 
    {
    exchange.fill_db(filename);
    exchange.parse_data(argv[1]);   
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}