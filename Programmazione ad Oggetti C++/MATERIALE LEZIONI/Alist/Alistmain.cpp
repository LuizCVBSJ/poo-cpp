// From the software distribution accompanying the textbook
// "A Practical Itemroduction to Data Structures and Algorithm Analysis,
// Third Edition (C++)" by Clifford A. Shaffer.
// Source code Copyright (C) 2007-2011 by Clifford A. Shaffer.

// Array-based list class test program

#include <iostream>
#include <cstdlib>
#include <string>
#include <time.h>  // Used by timing functions

using namespace std;

// Include the array-based list template code
#include "alist.h"

// Generic list test commands
#include "ListTest.h"


// find function for Items.
// Return true if "K" is in list "L", false otherwise
int find(List<Item>& L, int K) {
	Item it;
	for (L.moveToStart(); L.currPos()<L.length(); L.next()) {
		it = L.getValue();
		if (K == it.key()) return L.currPos();  // Found K
	}
	return -1;                // K not found
}

// find function for Items.
// Return true if "item" is in list "L", false otherwise
int find(List<Item>& L, const Item& item_to_search) {
	Item it;
	for (L.moveToStart(); L.currPos()<L.length(); L.next()) {
		it = L.getValue();
		if (item_to_search.key() == it.key()) return L.currPos();  // Found K
	}
	return -1;                // K not found
}

// Insert "it" at current position
void insert_ordered(List<Item>& L, const Item& it) {
	if (L.length() == 0)
	{
		L.insert(it);
		return;
	}
	for (L.moveToStart(); L.currPos()<L.length(); L.next()) {
		if (it.key() <= L.getValue().key())
		{
			L.insert(it);
			return;
		}
	}
	L.append(it);
}


// Main routine for array-based list driver class
int main(int argc, char** argv) {
	
  // Declare some sample lists�
  AList<Item> L1;
  AList<Item> L2; 
  AList<int> L3; 

  Item temp;

  cout << "0) L1: "; lprint(L1);
  L1.moveToStart();
  L1.insert(Item(39)); // ammissibile in C++: � un passaggio di un "oggetto temporaneo"
  L1.next();
  L1.insert(Item(9));
  L1.insert(Item(5));
  L1.insert(Item(4));
  L1.insert(Item(3));
  L1.insert(Item(2));
  L1.insert(Item(1));
  cout << "1) L1: "; lprint(L1);
  L1.moveToEnd(); 
  cout << "2) L1: "; lprint(L1);

  Item  elemento(3);
  cout << elemento.key() << endl;
  cout << elemento << endl; //esempio di uso operatore
  L1.insert(elemento); // inserimento standard di un elemento tramite una variabile
  cout << "3) L1: "; lprint(L1);
  cout << "4) L1: "; cout << "Size: " << L1.length() << endl;
  L1.clear();
  cout << "5) L1: "; lprint(L1);

  L2.insert(Item(1));
  cout << "6) L2: "; lprint(L2);
  cout << "7) L2: "; cout << "Size: " << L2.length() << endl;
  L2.clear();

  L2.append(Item(1));
  cout << "8) L2: "; lprint(L2);
  L2.clear();
  L2.append(Item(1));
  L2.moveToEnd();
  cout << "9) L2: "; lprint(L2);
  L2.clear();

  L2.append(Item(1));
  temp = L2.remove();
  cout << "10) L2: "; lprint(L2);
  L2.append(Item(10));
  cout << "11) L2: "; lprint(L2);
  L2.append(Item(20));
  L2.append(Item(15));
  cout << "12) L2: "; lprint(L2);

  Item reftemp;

  L1.moveToStart();
  L1.insert(Item(39));
  L1.next();
  L1.insert(Item(9));
  L1.insert(Item(5));
  L1.append(Item(4));
  L1.append(Item(3));
  L1.append(Item(2));
  L1.append(Item(1));
  cout << "13) L1: "; lprint(L1);
  
  L1.moveToStart();

  int K=3;
  int found;
  if ((found=find(L1, K))<0)
     cout << "L1: Value " << K << " not found.\n";
  else cout << "L1: Found " << K << " in pos:" << found << endl; //al termine della find, se non viene trovato nessun elemento curr si trova a fine lista

  L1.moveToPos(found);
  cout << "14) L1: "; lprint(L1);

  K=33;
   if ((found=find(L1, K))<0)
    cout << "L1: Value " << K << " not found.\n";
  else cout << "L1: Found " << K << " in pos:" << found << endl;


  L2.moveToStart();
  if (L2.currPos()<L2.length()) {
    reftemp = L2.getValue();
    cout << "L2 curr: " << reftemp << endl;
	reftemp = L2.remove();
	cout << "15) L2: "; lprint(L2);
  }
  else
    cout << "L2: Nothing found\n";

  cout << "That is all.\n";
  
  return 0;
}