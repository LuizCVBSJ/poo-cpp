#ifndef ITEM_H
#define ITEM_H

#include <stdlib.h>
#include <time.h>  // Used by timing functions

#include <iostream>
using namespace std;

static int maxKey = 1000;

class Key
{
private:
	int keyvalue;
public:
	Key() { };
	Key(int k) { keyvalue = k; };
	bool operator== (const Key &other) const { 
		if (keyvalue == other.get()) return true;
		else return false;
	}
	bool operator<(const Key &other) const {
		if (keyvalue < other.get()) return true;
		else return false;
	}
	int get() const { return keyvalue; };
	void set(int k) { keyvalue= k; };
};

// Let us print out Items easily
inline ostream& operator<<(ostream& s, const Key& i)
{
	return s << i.get();
}

class Item 
  { 
    private:
      float info;
    public:
      Key keyval;
      Item() 
        { 
		  Key nullkey(maxKey);
		  keyval = nullkey; 
	    } 
      Key key() const
        { return keyval; }
      int null()
        { return keyval.get() == maxKey; }
      void random_element()
        {
		  keyval.set(1000*(1.0*rand()/RAND_MAX));  
          info =  1.0*(1.0*rand()/RAND_MAX); 
	    }  
      int scan(istream& is = cin)
        { 
		  int val;
		  is >> val >> info; 
		  keyval.set(val);
		  return !(cin.fail());
	    }
      void show(ostream& os = cout)
        { os << keyval << " " << info << endl; }
   }; 

  
#endif