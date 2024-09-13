/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe_Vec.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 16:39:05 by lshail            #+#    #+#             */
/*   Updated: 2024/04/30 16:02:31 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void PmergeMe::mergeVector(std::vector<std::pair<int, int> > &vec, int left, int half, int right)
{
    std::vector<std::pair<int, int> > L;
    std::vector<std::pair<int, int> > R;
    int i, j, k;
    int n1 = half - left + 1;
    int n2 = right - half;

    for (i = 0; i < n1; i++)
        L.push_back(vec[left + i]);
    for (j = 0; j < n2; j++)
        R.push_back(vec[half + 1 + j]);
    i = 0;
    j = 0;
    k = left;
    while (i < n1 && j < n2)
    {
        if (L[i].first <= R[j].first)
            vec[k] = L[i++];
        else
            vec[k] = R[j++];
        k++;
    }
    while (i < n1)
        vec[k++] = L[i++];
    while (j < n2)
        vec[k++] = R[j++];
}

void PmergeMe::merge_sort_vec(std::vector<std::pair<int, int> > &vec, int left, int right)
{
    if (left < right)
    {
        int m = left + (right - left) / 2;
        merge_sort_vec(vec, left, m);
        merge_sort_vec(vec, m + 1, right);
        mergeVector(vec, left, m, right);
    }
}

void PmergeMe::sort_vector()
{
    std::vector<std::pair<int, int> > tmp;
    std::vector<int> pend;
    std::vector<int> indexes;
    std::vector<int> jacobs;
    std::vector<int> result;
    std::vector<std::pair<int, int> >::iterator it;
    std::vector<int>::iterator it2;
    int n = -1;
    size_t t;

    if (vec.size() % 2 != 0)
    {
        n = vec[vec.size() - 1];
        vec.erase(vec.end() - 1);
    }
    for (it2 = vec.begin(); it2 != vec.end();it2 += 2)
        tmp.push_back(std::make_pair(*it2, *(it2 + 1)));
    for (it = tmp.begin(); it != tmp.end(); it++)
    {
        if (it->first < it->second)
            std::swap(it->first, it->second);
    }
    merge_sort_vec(tmp, 0, tmp.size() - 1);
    for (it = tmp.begin(); it != tmp.end(); it++)
    {
        main_vec.push_back(it->first);
        pend.push_back(it->second);
    }
    for (size_t i = 0; i < pend.size(); i++)
        indexes.push_back(i);
    t = pend.size();
    generate_jacob_numbers_vec(indexes, jacobs, t);
    combine_vec(indexes, jacobs, result);
    seek_and_insert_vec(result, pend);
    if (n != -1)
    {
        it2 = std::lower_bound(main_vec.begin(), main_vec.end(), n);
        main_vec.insert(it2, n);
    }
    vectorEnd = std::clock();
}

void PmergeMe::combine_vec(std::vector<int> &indexes, std::vector<int> &jacobs, std::vector<int> &result)
{
    size_t i = 0;
    int j;

    while (i < jacobs.size())
    {
        j = 0;
        while (j < (int)indexes.size())
        {
            if (indexes[j] == jacobs[i] && indexes[j] != -1 && !check_result_vec(result, j))
            {
                result.push_back(j);
                indexes[j] = -1;
                j--;
                while (j >= 0 && indexes[j] != -1)
                {
                    result.push_back(j);
                    indexes[j] = -1;
                    j--;
                }
            }
            j++;
        }
        i++;
    }
    j = 0;
    while (j < (int)indexes.size())
    {
        if (indexes[j] != -1)
            result.push_back(j);
        j++;
    }
}

void PmergeMe::seek_and_insert_vec(std::vector<int> &result, std::vector<int> &pend)
{
    std::vector<int> bound;
    std::vector<int>::iterator it;

    for (size_t i = 0; i < result.size(); i++)
    {
        if (result[i] != -1)
            bound.push_back(pend[result[i]]);
    }
    for (size_t i = 0; i < bound.size(); i++)
    {
        it = std::lower_bound(main_vec.begin(), main_vec.end(), bound[i]);
        main_vec.insert(it, bound[i]);
    }
}

void PmergeMe::generate_jacob_numbers_vec(std::vector<int> indexes, std::vector<int> &jacobs, size_t t)
{
    std::vector<int>::iterator it;

    for (it = indexes.begin(); it != indexes.end(); it++)
    {
        if (*it == 0)
            jacobs.push_back(0);
        else if (*it == 1)
            jacobs.push_back(1);
        else
        {
            size_t jacob = ((jacobs[*it - 2] * 2) + jacobs[*it - 1]);
            if (jacob < t)
                jacobs.push_back(jacob);
            else
                break;
        }
    }
}


bool PmergeMe::check_result_vec(std::vector<int> result, int i)
{
    for (size_t j = 0; j < result.size(); j++)
    {
        if (result[j] == i)
            return true;
    }
    return false;
}

void PmergeMe::print_vec_before() const
{
    std::cout << "Before: ";
    for (std::vector<int>::const_iterator it = vec.begin(); it != vec.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;
}

void PmergeMe::print_vec_after() const
{
    std::cout << "After: ";
    for (std::vector<int>::const_iterator it = main_vec.begin(); it != main_vec.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;
}

void PmergeMe::printSortingTimeVector()
{
    double elapsedTime = static_cast<double>(vectorEnd - vectorStart) / CLOCKS_PER_SEC ;
    std::cout << "Time to process a range of " << vecSize << " elements with std::vector " << elapsedTime << " seconds" << std::endl;
}