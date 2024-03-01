#include <iostream>
#include <stdlib.h>
#include "item-es2.h"
#include "bst-es2.h"
#include <ctime>  // Used by timing functions

int main(int argc, char *argv[])
  { 
	srand(time(NULL));
	int N, maxN = atoi(argv[1]), sw = atoi(argv[2]);
    BST<Item, Key> st;
    for (N = 0; N < maxN; N++)
      { Item v; 
        if (sw) v.random_element(); else if (!v.scan()) break;
        if (!(st.search(v.key())).null()) continue;

		v.show();
        st.insert(v); 
      }

	cout << endl << "stampa bst pre-order" << endl;
	st.show(cout); cout << endl;
  }