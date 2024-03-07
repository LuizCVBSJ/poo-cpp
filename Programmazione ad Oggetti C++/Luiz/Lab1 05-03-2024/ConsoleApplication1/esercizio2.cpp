#include<iostream>
using namespace std;

int main()
{
  const short n = 31;
  short calendar_a[n];
  short calendar_b[n];

  for (short i = 0; i < n; i++)
  {
    calendar_a[i] = 0;
    calendar_b[i] = 0;
  }
  
  cout << "\nFirst Calendar:\n Type a number between 1 and 31 if that day you will be avaiable, Type 0 if done\n";
  int run = 1;
  while (run == 1) {
    int typed;
    cin >> typed;
    if (typed == 0)
    {
      run = 0;
    }
    if (typed > 0 && typed <= 31)
    {
      calendar_a[typed] = 1;
    }
    else 
    {
      cout << "Number not whithin bounds, try again!\n";
    }
  }

  cout << "\nSecond Calendar:\n Type a number between 1 and 31 if that day you will be avaiable, Type 0 if done\n";
  run = 1;
  while (run == 1) {
    int typed;
    cin >> typed;
    if (typed == 0)
    {
      run = 0;
    }
    if (typed > 0 && typed <= 31)
    {
      calendar_a[typed] = 1;
    }
    else 
    {
      cout << "Number not whithin bounds, try again!\n";
    }
  }

  for (short i = 0; i < n; i++)
  {
    if (calendar_a[i] == 1 && calendar_b[i] == 1)
    {
      cout << "Avaiable on day {" << i << "}\n";
    }
  }
}
