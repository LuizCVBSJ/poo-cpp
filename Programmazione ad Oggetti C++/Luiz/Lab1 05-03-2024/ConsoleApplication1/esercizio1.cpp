#include<iostream>
using namespace std;

int main()
{
  const int n = 5;
  int array_a[n];
  int array_b[n] = {0, -3, 6, -9, 12};
  int array_c[n];

  for (int i = 0 ; i < n ; i++)
  {
    cout << "Type the number for Array A [" << i << "] Position:\n";
    cin >> array_a[i];
  }
  
  
  int j = n-1;
  for (int i = 0; i < n; i++)
  {
    array_c[i] = array_a[i] + array_b[j];
  }

  cout << "\nArray A:\n";
  for (int i = 0; i < n; i++)
  {
    cout << "{" << array_a[i] << "} ";
  }

  cout << "\nArray B:\n";
  for (int i = 0; i < n; i++)
  {
    cout << "{" << array_b[i] << "} ";
  }

  cout << "\nArray C:\n";
  for (int i = 0; i < n; i++)
  {
    cout << "{" << array_c[i] << "} ";
  }
}
