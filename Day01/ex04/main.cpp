/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:35:27 by lshail            #+#    #+#             */
/*   Updated: 2023/11/03 16:24:00 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void replace_str(std::string inFile, std::string s1, std::string s2)
{
    std::string getInput;
    size_t      pos;
    size_t      found;
    std::string outFile;

    std::ifstream   inputFile(inFile);
    if (!inputFile.is_open())
    {
        std::cout << "Failed to read from inputFile" << std::endl;
        return;
    }
    outFile = inFile + ".replace";
    std::ofstream   outputFile(outFile);
    if (!outputFile.is_open())
    {
        std::cout << "Failed to create outputFile" << std::endl;
        return;
    }
    while (std::getline(inputFile, getInput))
    {
        
        pos = 0;
        found = getInput.find(s1);
        while (found != std::string::npos && s1.length() > 0)
        {
            // std::cout << found << '\n';
            outputFile << getInput.substr(pos, found - pos);
            outputFile << s2;
            pos = found + s1.length();
            found = getInput.find(s1, pos);
        }
        outputFile << getInput.substr(pos) << std::endl;
    }
    inputFile.close();
    outputFile.close();
}

int main(int ac, char **av)
{
    if (ac == 4)
        replace_str(av[1], av[2], av[3]);
    else
        std::cout << "Invalid Arguments" << std::endl;
    return (0);
}
