#include "esercizio0.h"

int main()
{
  Furniture Box;
  Furniture Box2(15, 36);
  cout << "Box w = " << Box.get_width() << " h = " << Box.get_height() << "\n";
 
  cout << "Box2 w = " << Box2.get_width() << " h = " << Box2.get_height() << "\n";

  Closet Square;
  Closet Square2(6);

  cout << "Closet Square = " << Square.get_shelve_number() << "\n";
  cout << "Closet Square2 = " << Square2.get_shelve_number() << "\n";
};
