/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe_Deq.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 16:39:08 by lshail            #+#    #+#             */
/*   Updated: 2024/04/30 16:03:36 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void PmergeMe::mergeDeque(std::deque<std::pair<int, int> > &deq, int left, int half, int right)
{
    std::deque<std::pair<int, int> > L;
    std::deque<std::pair<int, int> > R;
    int i, j, k;
    int n1 = half - left + 1;
    int n2 = right - half;

    for (i = 0; i < n1; i++)
        L.push_back(deq[left + i]);
    for (j = 0; j < n2; j++)
        R.push_back(deq[half + 1 + j]);
    i = 0;
    j = 0;
    k = left;
    while (i < n1 && j < n2)
    {
        if (L[i].first <= R[j].first)
            deq[k] = L[i++];
        else
            deq[k] = R[j++];
        k++;
    }
    while (i < n1)
        deq[k++] = L[i++];
    while (j < n2)
        deq[k++] = R[j++];
}

void PmergeMe::merge_sort_deque(std::deque<std::pair<int, int> > &deq, int left, int right)
{
    if (left < right)
    {
        int m = left + (right - left) / 2;
        merge_sort_deque(deq, left, m);
        merge_sort_deque(deq, m + 1, right);
        mergeDeque(deq, left, m, right);
    }
}

void PmergeMe::sort_deque()
{
    std::deque<std::pair<int, int> > tmp;
    std::deque<int> pend;
    std::deque<int> indexes;
    std::deque<int> jacobs;
    std::deque<int> result;
    std::deque<std::pair<int, int> >::iterator it;
    std::deque<int>::iterator it2;
    int n = -1;
    size_t t;

    if (deq.size() % 2 != 0)
    {
        n = deq[deq.size() - 1];
        deq.erase(deq.end() - 1);
    }
    for (it2 = deq.begin(); it2 != deq.end();it2 += 2)
        tmp.push_back(std::make_pair(*it2, *(it2 + 1)));
    for (it = tmp.begin(); it != tmp.end(); it++)
    {
        if (it->first < it->second)
            std::swap(it->first, it->second);
    }
    merge_sort_deque(tmp, 0, tmp.size() - 1);
    for (it = tmp.begin(); it != tmp.end(); it++)
    {
        main_deq.push_back(it->first);
        pend.push_back(it->second);
    }
    for (size_t i = 0; i < pend.size(); i++)
        indexes.push_back(i);
    t = pend.size();
    generate_jacob_numbers_deq(indexes, jacobs, t);
    combine_deq(indexes, jacobs, result);
    seek_and_insert_deq(result, pend);
    if (n != -1)
    {
        it2 = std::lower_bound(main_deq.begin(), main_deq.end(), n);
        main_deq.insert(it2, n);
    }
    dequeEnd = std::clock();
}

void PmergeMe::combine_deq(std::deque<int> &indexes, std::deque<int> &jacobs, std::deque<int> &result)
{
    size_t i = 0;
    int j;

    while (i < jacobs.size())
    {
        j = 0;
        while (j < (int)indexes.size())
        {
            if (indexes[j] == jacobs[i] && indexes[j] != -1 && !check_result_deq(result, j))
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

void PmergeMe::seek_and_insert_deq(std::deque<int> &result, std::deque<int> &pend)
{
    std::deque<int> bound;
    std::deque<int>::iterator it;

    for (size_t i = 0; i < result.size(); i++)
    {
        if (result[i] != -1)
            bound.push_back(pend[result[i]]);
    }
    for (size_t i = 0; i < bound.size(); i++)
    {
        it = std::lower_bound(main_deq.begin(), main_deq.end(), bound[i]);
        main_deq.insert(it, bound[i]);
    }
}

void PmergeMe::generate_jacob_numbers_deq(std::deque<int> indexes, std::deque<int> &jacobs, size_t t)
{
    std::deque<int>::iterator it;

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


bool PmergeMe::check_result_deq(std::deque<int> result, int i)
{
    for (size_t j = 0; j < result.size(); j++)
    {
        if (result[j] == i)
            return true;
    }
    return false;
}

void PmergeMe::printSortingTimeDeque() 
{
    double elapsedTime = static_cast<double>(dequeEnd - dequeStart) / CLOCKS_PER_SEC;
    std::cout << "Time to process a range of " << deqSize << " elements with std::deque " << elapsedTime << " seconds" << std::endl;
}