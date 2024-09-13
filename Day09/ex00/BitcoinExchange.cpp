/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 16:52:55 by lshail            #+#    #+#             */
/*   Updated: 2024/04/17 15:11:47 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::~BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &src)
{
    *this = src;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &src)
{
    if (this != &src)
    {
        this->data = src.data;
    }
    return *this;
}

void BitcoinExchange::fill_db(std::string &filename)
{
    std::fstream file(filename);
    std::string line;
    std::stringstream ss;
    std::string date;
    std::string price;
    double price_d;

    if (!file.is_open())
        throw std::invalid_argument("Error: could not open file");
    std::getline(file, line);
    if (line.empty())
        throw std::invalid_argument("Error: empty database file");
    if (line != "date,exchange_rate")
        throw std::invalid_argument("Error: wrong file format");
    while (std::getline(file, line))
    {
        date = line.substr(0, line.find_first_of(','));
        price = line.substr(line.find_first_of(',') + 1);
        ss.clear();
        ss << price;
        ss >> price_d;
        data[date] = price_d;
    }
}

void BitcoinExchange::parse_data(std::string input_file)
{
    std::ifstream file(input_file);
    std::string line;
    std::string date;
    std::string price;
    std::stringstream ss;
    size_t pos;

    if (!file.is_open())
        throw std::invalid_argument("Error: could not open file");
    if (data.empty())
        throw std::invalid_argument("Error: database is empty");
    std::getline(file, line);
    if (line.compare("date | value") != 0)
        throw std::invalid_argument("Error: wrong file format");
    while (std::getline(file, line))
    {
        try
        {
            pos = line.find(" | ");
            if (pos == std::string::npos)
                throw std::invalid_argument("Error: bad input => " + line);
            date = line.substr(0, pos);
            parse_date(date);
            price = line.substr(pos + 3);
            parse_price(price);
            seek_and_print(date, price);
        }
        catch (const std::exception &e)
        {
            std::cout << e.what() << std::endl;
            continue;
        }
    }
}

void BitcoinExchange::parse_date(std::string date)
{
    std::string::size_type pos;
    std::string date_s;

    date_s = date;
    if (date.size() != 10 || date[4] != '-' || date[7] != '-')
        throw std::invalid_argument("Error: bad input => " + date);
    pos = date.find_first_of('-');
    year = date.substr(0, pos);
    check_year(year, date_s);
    date = date.substr(pos + 1);
    pos = date.find_first_of('-');
    month = date.substr(0, pos);
    check_month(month, date_s);
    date = date.substr(pos + 1);
    day = date.substr(0);
    check_day(day, month, year, date_s);
}

void BitcoinExchange::check_year(std::string &year, std::string &date)
{
    if (year.size() != 4 || year.compare("2030") > 0 || year.compare("2009") < 0)
        throw std::invalid_argument("Error: bad input => " + date);
    for (int i = 0; i < 4; i++)
    {
        if (!isdigit(year[i]))
            throw std::invalid_argument("Error: bad input => " + date);
    }
}

void BitcoinExchange::check_month(std::string &month, std::string &date)
{
    int month_i;
    std::stringstream ss(month);

    ss >> month_i;
    if (month.size() != 2)
        throw std::invalid_argument("Error: bad input => " + date);
    for (int i = 0; i < 2; i++)
    {
        if (!isdigit(month[i]))
            throw std::invalid_argument("Error: bad input => " + date);
    }
    if (month_i < 1 || month_i > 12)
        throw std::invalid_argument("Error: bad input => " + date);
}

bool BitcoinExchange::isLeapYear(int year)
{
    if (year % 4 != 0 || (year % 100 == 0 && year % 400 != 0))
        return false;
    return true;
}

void BitcoinExchange::check_day(std::string &day, std::string &month, std::string &year, std::string &date)
{
    int day_i;
    int year_i;
    std::stringstream ss(day);
    std::stringstream ss2(year);

    ss2 >> year_i;
    ss >> day_i;
    if (day.size() != 2)
        throw std::invalid_argument("Error: bad input => " + date);
    for (int i = 0; i < 2; i++)
    {
        if (!isdigit(day[i]))
            throw std::invalid_argument("Error: bad input => " + date);
    }
    if (month == "02" && day_i > 28)
    {
        if (isLeapYear(year_i) && day_i == 29)
            return;
        throw std::invalid_argument("Error: bad input => " + date);
    }
    if ((month == "04" || month == "06" || month == "09" || month == "11") && day_i > 30)
        throw std::invalid_argument("Error: bad input => " + date);
    if (day_i < 1 || day_i > 31)
        throw std::invalid_argument("Error: bad input => " + date);
}

void BitcoinExchange::parse_price(std::string price)
{
    double price_d;
    std::stringstream ss(price);
    int dotCount = 0;
    int plusCount = 0;
    int minusCount = 0;

    if (price.empty())
        throw std::invalid_argument("Error: empty price.");
    for (size_t i = 0; i < price.size(); ++i)
    {
        if (price[i] == '.')
            dotCount++;
        if (price[i] == '+')
            plusCount++;
        if (price[i] == '-')
            minusCount++;
    }
    if (dotCount > 1 || price[0] == '.' || plusCount > 1 || minusCount > 1 || (price[0] != '+' && price[0] != '-' && (plusCount == 1 || minusCount == 1)))
        throw std::invalid_argument("Error: bad price.");
    if (price.find_first_of("0123456789") == std::string::npos)
        throw std::invalid_argument("Error: bad price.");
    for (size_t i = 0; i < price.size(); i++)
    {
        if (!isdigit(price[i]) && price[i] != '.' && price[i] != '+' && price[i] != '-')
            throw std::invalid_argument("Error: bad price.");
    }
    ss >> price_d;
    if (price_d < 0)
        throw std::invalid_argument("Error: not a positive number.");
    if (price_d > 1000)
        throw std::invalid_argument("Error: too large a number.");
}

void BitcoinExchange::seek_and_print(std::string &date, std::string &price)
{
    std::map<std::string, double>::iterator it = data.begin();
    std::stringstream ss(price);
    double price_d;

    ss >> price_d;
    it = data.lower_bound(date);
    if (it == data.end())
        std::cout << date << " | " << "No data" << std::endl;
    else
        std::cout << date << " => " << price << " | " << it->second * price_d << std::endl;
}