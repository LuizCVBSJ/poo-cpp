#ifndef ES2
#define ES2

#include <iostream>
using namespace std;

template <typename T>
  T most_common(T *A, int size)
  {
    T current_most_common = A[0];
    int current_most_common_count = 0;
    int count[size];
    for (int i = 0; i < size; i++)
    {
      count[i] = 0;
    }
    for (int i = 0; i < size; i++)
    {
      for (int j = i; j < size; j++)
        if (A[i] == A[j])
        {
          count[i]++; 
        }
    }
    for (int i = 0; i < size; i++)
    {
      if (count[i] > current_most_common_count)
      {
        current_most_common = A[i];
        current_most_common_count = count[i];
      }
    }
    return current_most_common;
  }
#endif
