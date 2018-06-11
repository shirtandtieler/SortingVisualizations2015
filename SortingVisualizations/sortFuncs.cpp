#include "sortfuncs.h"



/**
 * @brief SortFuncs::swap   A helper function that swaps the values of two integers
 * @param vect  The list of integers of which to switch in
 * @param i The index of the first number
 * @param j The index of the second number
 */
void SortFuncs::swap(std::vector<int> & vect, int i, int j)
{
    int tmp = vect[i];
    vect[i] = vect[j];
    vect[j] = tmp;
}


/**
 * @brief SortFuncs::bubble_sort    Continuously goes through the given vector, swapping elements until sorting is completed
 * @param vect  A list of integers to sort
 */
void SortFuncs::bubble_sort(std::vector<int> & vect)
{
    bool swapp = true;
    while(swapp){
        swapp = false;
        for (size_t i = 0; i < vect.size()-1; i++) {
            if (vect[i] > vect[i+1] ){
                vect[i] += vect[i+1];
                vect[i+1] = vect[i] - vect[i+1];
                vect[i] -= vect[i+1];
                swapp = true;
            }
        }
    }
}

/**
 * @brief SortFuncs::heap_sort
 * @param vect  A list of integers to sort
 */
void SortFuncs::heap_sort(std::vector<int>& vect)
{
    init_heap(vect);
    for(std::vector<int>::size_type i = vect.size()-1; i > 0; --i)
    {
        swap(vect, i, 0);
        sift(vect, i, 0);
    }
}

// part of heap sort
/**
 * @brief SortFuncs::init_heap
 * @param vect  A list of integers to sort
 */
void SortFuncs::init_heap(std::vector<int>& vect)
{
    for(int i = vect.size() - 1; i >= 0; --i)
    {
        sift(vect, vect.size(), i);
    }
}

// part of heap sort
/**
 * @brief SortFuncs::sift
 * @param vect
 * @param heapSize
 * @param siftNode
 */
void SortFuncs::sift(std::vector<int>& vect, const std::vector<int>::size_type heapSize, const std::vector<int>::size_type siftNode)
{
    std::vector<int>::size_type i, j;

    j = siftNode;
    do
    {
        i = j;
        if (((2*i + 1) < heapSize) && vect[j] < vect[2*i + 1])
            j = 2*i + 1;
        if (((2*i + 2) < heapSize) && vect[j] < vect[2*i + 2])
            j = 2*i + 2;

        swap(vect, i, j);
    }
    while(i != j);
}

/**
 * @brief SortFuncs::insert_sort    Iterative through the given vector, putting the current value in its sorted position
 * @param vect  A list of integers to sort
 */
void SortFuncs::insert_sort(std::vector<int> & vect)
{
    int j, val;

    for (int i = 1; i < vect.size(); i++) {
        val = vect[i];
        j = i - 1;

        while (j >= 0 && vect[j] > val) {
            vect[j + 1] = vect[j];
            j = j - 1;
        }
        vect[j + 1] = val;
    }
}

/**
 * @brief SortFuncs::merge_sort Recursively sort the given vector
 * @param vect  A list of integers to sort
 * @return  The sorted vector
 */
std::vector<int> SortFuncs::merge_sort(std::vector<int> vect)
{
   if (vect.size() <= 1)
      return vect;

   std::vector<int> left, right, result;
   int middle = ((int)vect.size()+ 1) / 2;

   for (int i = 0; i < middle; i++) {
      left.push_back(vect[i]);
   }

   for (int i = middle; i < (int)vect.size(); i++) {
      right.push_back(vect[i]);
   }

   left = merge_sort(left);
   right = merge_sort(right);
   result = merge(left, right);

   return result;
}

// part of merge sort
/**
 * @brief SortFuncs::merge
 * @param left
 * @param right
 * @return
 */
std::vector<int> SortFuncs::merge(std::vector<int> left, std::vector<int> right)
{
   std::vector<int> result;
   while ((int)left.size() > 0 || (int)right.size() > 0) {
      if ((int)left.size() > 0 && (int)right.size() > 0) {
         if ((int)left.front() <= (int)right.front()) {
            result.push_back((int)left.front());
            left.erase(left.begin());
         }
     else {
            result.push_back((int)right.front());
            right.erase(right.begin());
         }
      }  else if ((int)left.size() > 0) {
            for (int i = 0; i < (int)left.size(); i++)
               result.push_back(left[i]);
            break;
      }  else if ((int)right.size() > 0) {
            for (int i = 0; i < (int)right.size(); i++)
               result.push_back(right[i]);
            break;
      }
   }
   return result;
}

/**
 * @brief SortFuncs::selection_sort Iterate through the indices, and put the next smallest value in its place
 * @param vect  A list of integers to sort
 */
void SortFuncs::selection_sort(std::vector<int> & vect)
{
    int length = vect.size();

    for (int i = 0; i < length; i++)
    {
        int min = i;
        for (int j = i + 1; j < length; j++)
        {
            if (vect[j] < vect[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            swap(vect, i, min);
        }
    }
}


/**
 * @brief SortFuncs::shell_sort A variation of insertion sort that benefits values far from their target destination
 * @param vect  A list of integers to sort
 */
void SortFuncs::shell_sort(std::vector<int> & vect)
{
    int i = 0;
    for (int gap = vect.size() / 2; gap > 0; gap /= 2)
    {
        for (int j = gap; j < vect.size(); j++)
        {
            int tmp = vect[i];
            for (j = i; j >= gap && tmp < vect[j - gap]; j -= gap)
            {
                vect[j] = vect[j - gap];
            }
            vect[j] = tmp;
        }
    }
}

/**
 * @brief SortFuncs::quick_sort1
 * @param vect
 * @param left
 * @param right
 */
void SortFuncs::quick_sort1(std::vector<int> & vect, int left, int right) {
      int i = left, j = right;
      int tmp;
      int pivot = vect[(left + right) / 2];

      //partition the vector
      while (i <= j) {
            while (vect[i] < pivot)
                  i++;
            while (vect[j] > pivot)
                  j--;
            if (i <= j) {
                  tmp = vect[i];
                  vect[i] = vect[j];
                  vect[j] = tmp;
                  i++;
                  j--;
            }
      };

      if (left < j)
        quick_sort1(vect, left, j);
      if (i < right)
        quick_sort1(vect, i, right);
}

/**
 * @brief SortFuncs::quick_sort2
 * @param vect
 * @param left
 * @param right
 * @param cutoff
 */
void SortFuncs::quick_sort2(std::vector<int> & vect, int left, int right, int cutoff)
{
    if (cutoff > vect.size())
        cutoff = vect.size();
    if (vect.size() == cutoff)
    {
        insert_sort(vect);
        return;
    }
    int i = left, j = right;
    int tmp = 0;
    int pivot = vect[(left + right) / 2];

    //partition the vector
    while (i <= j)
    {
        while (vect[i] < pivot)
            i++;
        while (vect[j] > pivot)
            j--;
        if (i <= j)
        {
            tmp = vect[i];
            vect[i] = vect[j];
            vect[j] = tmp;
            i++;
            j--;
        }
    };
    if (left < j)
        quick_sort2(vect, left, j, cutoff);
    if (i < right)
        quick_sort2(vect, i, right, cutoff);
}


/**
 * @brief SortFuncs::quick_sort3
 * @param vect
 * @param left
 * @param right
 */
void SortFuncs::quick_sort3(std::vector<int> & vect, int left, int right) {
    int midlVal = vect[(right-left)/2];
    int threes[3] = {vect[left], midlVal, vect[right]};

    int minVal=std::min(vect[left],std::min(midlVal, vect[right]));
    int maxVal=std::max(vect[left], std::max(midlVal, vect[right]));
    int medVal;
    for (int i = 0; i < 3; i++)
        if (threes[i] != minVal && threes[i] != maxVal)
            medVal = threes[i];

    vect[left] = minVal;
    vect[(right-left)/2] = medVal;
    vect[right] = maxVal;

    quick_sort1(vect, left, right);

}
