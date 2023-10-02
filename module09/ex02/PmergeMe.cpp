/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 19:00:03 by adardour          #+#    #+#             */
/*   Updated: 2023/10/02 19:55:12 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int   get_index(int value, std::vector<int> &sequence)
{
    int index = -1;
    for (size_t i = 0; i < sequence.size(); i++)
    {
        if (value < sequence[i])
        {
            index = i;
            break;
        }
    }
    return index;
}

std::vector<int>    insertion_sort(std::vector<int> &sequence, std::vector<std::pair<int,int> > &container1, bool is_odd, int last)
{

    std::vector<std::pair<int,int> >::iterator it = container1.begin();
    std::vector<std::pair<int,int> >::iterator ite = container1.end();
    for (; it != ite; ++it)
    {
        int value = it->first;
        int index = get_index(value, sequence);
        std::vector<int>::iterator bg = sequence.begin();
        sequence.insert(bg + index, value);
    }
    return (sequence);
}


void merge(std::vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Create temporary arrays to hold the two halves
    std::vector<int> leftHalf(n1);
    std::vector<int> rightHalf(n2);

    // Copy data to temporary arrays leftHalf[] and rightHalf[]
    for (int i = 0; i < n1; i++) {
        leftHalf[i] = arr[left + i];
    }
    for (int i = 0; i < n2; i++) {
        rightHalf[i] = arr[mid + 1 + i];
    }

    // Merge the two halves back into the original vector
    int i = 0; // Initial index of first subarray
    int j = 0; // Initial index of second subarray
    int k = left; // Initial index of merged subarray

    while (i < n1 && j < n2) {
        if (leftHalf[i] <= rightHalf[j]) {
            arr[k] = leftHalf[i];
            i++;
        } else {
            arr[k] = rightHalf[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of leftHalf[], if any
    while (i < n1) {
        arr[k] = leftHalf[i];
        i++;
        k++;
    }

    // Copy the remaining elements of rightHalf[], if any
    while (j < n2) {
        arr[k] = rightHalf[j];
        j++;
        k++;
    }
}

void mergeSort(std::vector<int>& arr, int left, int right) {
    if (left < right) {
        // Find the middle point of the vector
        int mid = left + (right - left) / 2;

        // Recursively sort the first and second halves
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Merge the sorted halves
        merge(arr, left, mid, right);
    }
}

std::vector<int>    get_sorted_sequence(std::vector<std::pair<int,int> > &pairs)
{
    std::vector<int> sequence;
    std::vector<std::pair<int,int> >::iterator it = pairs.begin();
    std::vector<std::pair<int,int> >::iterator ite = pairs.end();

    for (; it != ite; ++it)
    {
        int max = std::max(it->first, it->second);
        sequence.push_back(max);
    }

    return sequence;
}

int get_size(char **argv)
{
    int i = 1;
    while (argv[i])
    {
        i++;
    }
    return (i - 1);
}

void    add_pairs(char **argv, int index,std::vector<std::pair<int,int> > &container1)
{
    int first = std::atoi(argv[index]);
    int second = std::atoi(argv[index + 1]);
    std::cout << first << " " << second << " ";
    if (first > second)
    {
        int temp;
        temp = first;
        first = second;
        second = temp;
    }
    container1.push_back(std::make_pair(first,second));
}

void    show_output(std::vector<int> final)
{
    std::cout << "After:  ";

    std::vector<int>::iterator it = final.begin();
    std::vector<int>::iterator ite = final.end();
    while (it != ite)
    {
        std::cout << *it << " ";
        it++;
    }
    std::cout << "\n";

}

void    container1(char **argv)
{
    clock_t start, end;
    start = clock();
    std::cout << "Before: ";
    std::vector<std::pair<int,int> > container1;
    int is_odd = 0;
    std::string l = argv[get_size(argv)];
    if (get_size(argv) % 2 == 1)
        is_odd = 1;
    int i = 1;
    while (i <= get_size(argv) - is_odd)
    {
        add_pairs(argv, i, container1);
        i += 2;
    }
    if (is_odd)
        std::cout << std::atoi(l.c_str());
    std::cout << "\n";
    std::vector<int> sorted_sequence = get_sorted_sequence(container1);
    mergeSort(sorted_sequence, 0, sorted_sequence.size() - 1);
    std::vector<int> final = insertion_sort(sorted_sequence, container1, is_odd, std::atoi(l.c_str()));
    if (is_odd)
    {
        int index = get_index(std::atoi(l.c_str()), final);
        if (index == -1)
            index = final.size();
        std::vector<int>::iterator bg = final.begin();
        final.insert(bg + index, std::atoi(l.c_str()));
    }
    show_output(final);
    end = clock();
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    std::cout << "Time to process a range of " << final.size() << " elements with std::vector<int> : " ;
    std::cout << std::fixed << time_taken << std::setprecision(5) << " s" << std::endl;
}

void    ford_johnson(char **argv)
{
    container1(argv);
    container2(argv);
}

void    add_pairs(char **argv, int index,std::list<std::pair<int,int> > &container2)
{
    int first = std::atoi(argv[index]);
    int second = std::atoi(argv[index + 1]);
    if (first > second)
    {
        int temp;
        temp = first;
        first = second;
        second = temp;
    }
    container2.push_back(std::make_pair(first,second));
}

std::list<int>    get_sorted_sequence(std::list<std::pair<int,int> > &pairs)
{
    std::list<int> sequence;
    std::list<std::pair<int,int> >::iterator it = pairs.begin();
    std::list<std::pair<int,int> >::iterator ite = pairs.end();

    while (it != ite)
    {
        int max = std::max(it->first, it->second);
        sequence.push_back(max);
        it++;
    }
    return sequence;
}

void merge(std::list<int>& arr, int left, int mid, int right) {
    std::list<int> leftHalf;
    std::list<int> rightHalf;

    std::list<int>::iterator it = arr.begin();
    for (int i = left; i <= mid; i++) {
        leftHalf.push_back(*it);
        ++it;
    }

    for (int i = mid + 1; i <= right; i++) {
        rightHalf.push_back(*it);
        ++it;
    }

    // Merge the two halves back into the original list
    std::list<int>::iterator leftIter = leftHalf.begin();
    std::list<int>::iterator rightIter = rightHalf.begin();
    it = arr.begin();
    
    while (leftIter != leftHalf.end() && rightIter != rightHalf.end()) {
        if (*leftIter <= *rightIter) {
            *it = *leftIter;
            ++leftIter;
        } else {
            *it = *rightIter;
            ++rightIter;
        }
        ++it;
    }

    // Copy the remaining elements of leftHalf, if any
    while (leftIter != leftHalf.end()) {
        *it = *leftIter;
        ++leftIter;
        ++it;
    }

    // Copy the remaining elements of rightHalf, if any
    while (rightIter != rightHalf.end()) {
        *it = *rightIter;
        ++rightIter;
        ++it;
    }
}

void mergeSort(std::list<int>& arr, int left, int right) {
    if (left < right) {
        // Find the middle point of the vector
        int mid = left + (right - left) / 2;

        // Recursively sort the first and second halves
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Merge the sorted halves
        merge(arr, left, mid, right);
    }
}

int   get_index(int value, std::list<int> &sequence)
{
    int index = 0;
    std::list<int>::iterator it = sequence.begin();
    std::list<int>::iterator ite = sequence.end();
    while (it != ite)
    {
        if (value < *it)
            break;
        index++;
        it++;
    }
    return index;
}


std::list<int>    insertion_sort(std::list<int> &sequence, std::list<std::pair<int,int> > &container1, bool is_odd, int last)
{

    std::list<std::pair<int,int> >::iterator it = container1.begin();
    std::list<std::pair<int,int> >::iterator ite = container1.end();

    for (; it != ite; ++it)
    {
        int value = it->first;
        int index = get_index(value, sequence);
        std::list<int>::iterator start = sequence.begin();
        std::advance(start, index);
        sequence.insert(start, value);
    }
    return (sequence);
}

void    container2(char **argv)
{
    clock_t start, end;
    start = clock();
    std::list<std::pair<int,int> > container2;
    int is_odd = 0;
    std::string l = argv[get_size(argv)];
    if (get_size(argv) % 2 == 1)
        is_odd = 1;
    int i = 1;
    while (i <= get_size(argv) - is_odd)
    {
        add_pairs(argv, i, container2);
        i += 2;
    }
    std::list<int> sorted_sequence = get_sorted_sequence(container2);
    mergeSort(sorted_sequence, 0, sorted_sequence.size() - 1);
    std::list<int> final = insertion_sort(sorted_sequence, container2, is_odd, std::atoi(l.c_str()));
    if (is_odd)
    {
        int index = get_index(std::atoi(l.c_str()), final);
        std::list<int>::iterator bg = final.begin();
        std::advance(bg,index);
        final.insert(bg, std::atoi(l.c_str()));
    }
    end = clock();
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    std::cout << "Time to process a range of " << final.size() << " elements with std::list<int> : " ;
    std::cout << std::fixed << time_taken << std::setprecision(5) << " s" << std::endl;
}