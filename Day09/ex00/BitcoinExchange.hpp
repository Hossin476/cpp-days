/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 16:52:57 by lshail            #+#    #+#             */
/*   Updated: 2024/03/06 18:05:29 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
#include <algorithm>
#include <fstream>
#include <sstream>
#include <map>


class BitcoinExchange
{
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &src);
        BitcoinExchange &operator=(const BitcoinExchange &src);
        ~BitcoinExchange();
        void fill_db(std::string &filename);
        void parse_data(std::string input_file);
        void parse_date(std::string date);
        void parse_price(std::string price);
        void check_year(std::string &year, std::string &date);
        void check_month(std::string &month, std::string &date);
        void check_day(std::string &day, std::string &month, std::string &year, std::string &date);
        bool isLeapYear(int year);
        void seek_and_print(std::string &date, std::string &price);
    private:
        std::map<std::string, double,std::greater<std::string> > data;
        std::string date;
        std::string price;
        std::string year;
        std::string month;
        std::string day;
};


#endif