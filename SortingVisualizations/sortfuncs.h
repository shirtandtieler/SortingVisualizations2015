#ifndef SORTFUNCS_H
#define SORTFUNCS_H

#include <iostream>
#include <math.h>
#include <chrono>
#include <cstdlib>
#include <cstdio>
#include <vector>

class SortFuncs
{
public:
    void bubble_sort(std::vector<int> & vect);

    void heap_sort(std::vector<int>& vect);
    void init_heap(std::vector<int>& vect);
    void sift(std::vector<int>& vect, const std::vector<int>::size_type heapSize, const std::vector<int>::size_type siftNode);

    void insert_sort(std::vector<int> & vect);

    std::vector<int> merge_sort(std::vector<int> vect);
    std::vector<int> merge(std::vector<int> left, std::vector<int> right);

    void selection_sort(std::vector<int> & vect);
    void swap(std::vector<int> & vect, int i, int j);

    void shell_sort(std::vector<int> & vect);

    void quick_sort1(std::vector<int> & vect, int left, int right);
    void quick_sort2(std::vector<int> & vect, int left, int right, int cutoff);
    void quick_sort3(std::vector<int> & vect, int left, int right);
};
#endif // SORTFUNCS_H

