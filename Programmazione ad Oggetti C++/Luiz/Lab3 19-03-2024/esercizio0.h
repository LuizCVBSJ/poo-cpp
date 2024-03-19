#ifndef ES0
#define ES0

#include <iostream>
using namespace std;

class Furniture
{
  private:
    int height;
    int width;
  public:
    Furniture(int new_height = 0, int new_width = 0)
    {
      height = new_height;
      width = new_width;
    }
    void set_width(int new_width)
    {
      width = new_width;
    }
    int get_width()
    {
      return width;
    }
    void set_height(int new_height)
    {
      height = new_height;
    }
    int get_height()
    {
      return height;
    }
};

class Closet
{
  private:
    int shelve_number;
  public:
    Closet(int new_shelve_number = 0)
    {
      shelve_number = new_shelve_number;
    }
    void set_shelve_number(int new_shelve_number)
    {
      shelve_number = new_shelve_number;
    }
    int get_shelve_number()
    {
      return shelve_number;
    }
};

#endif
