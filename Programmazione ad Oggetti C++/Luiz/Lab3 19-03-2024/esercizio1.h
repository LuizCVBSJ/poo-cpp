#ifndef ES1
#define ES1

#include <iostream>
using namespace std;

template <class T>
  T max2(T first, T second)
  {
    return (first > second) ? first : second;
  }

template <class T>
  T max3(T first, T second, T third)
  {
    T max_first_two;
    max_first_two = max2(first, second);
    return max2(max_first_two, third);
  }

#endif
