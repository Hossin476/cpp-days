/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 16:57:04 by lshail            #+#    #+#             */
/*   Updated: 2024/04/30 16:03:03 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <ctime>
#include <cstdlib>
#include <climits>
#include <algorithm>

class PmergeMe
{
public:
    PmergeMe();
    PmergeMe(const PmergeMe &other);
    PmergeMe &operator=(const PmergeMe &other);
    ~PmergeMe();


    // parsing functions
    int parse_elements(char **argv);
    int check_input(const std::string &str);

    // vector printing functions
    void print_vec_before() const;
    void print_vec_after() const;
    void printSortingTimeVector();
    
    // vector sorting functions
    void sort_vector();
    void merge_sort_vec(std::vector<std::pair<int,int> > &vec,int left, int right);
    void mergeVector(std::vector<std::pair<int,int> > &vec, int left, int half, int right);
    void generate_jacob_numbers_vec(std::vector<int> indexes, std::vector<int> &jacobs, size_t t);
    void combine_vec(std::vector<int> &indexes, std::vector<int> &jacobs, std::vector<int> &result);
    void seek_and_insert_vec(std::vector<int> &result, std::vector<int> &pend);
    bool check_result_vec(std::vector<int> result, int i);

    // deque printing functions
    void printSortingTimeDeque();
    
    // deque sorting functions
    void sort_deque();
    void merge_sort_deque(std::deque<std::pair<int,int> > &deq,int left, int right);
    void mergeDeque(std::deque<std::pair<int,int> > &deq, int left, int half, int right);
    void generate_jacob_numbers_deq(std::deque<int> indexes, std::deque<int> &jacobs, size_t t);
    void combine_deq(std::deque<int> &indexes, std::deque<int> &jacobs, std::deque<int> &result);
    void seek_and_insert_deq(std::deque<int> &result, std::deque<int> &pend);
    bool check_result_deq(std::deque<int> result, int i);


private:
    std::vector<int> vec;
    std::vector<int> main_vec;
    std::deque<int> deq;
    std::deque<int> main_deq;
    std::clock_t vectorStart;
    std::clock_t vectorEnd;

    std::clock_t dequeStart;
    std::clock_t dequeEnd;

    size_t vecSize;
    size_t deqSize;
};

#endif

