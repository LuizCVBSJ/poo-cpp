#include <iostream>
#include <string>
using namespace std;

class Book
{
  private:
    string title;
    int page;

  public:
    Book();
    void set_title(string new_title)
    {
      title = new_title;
    }
    string get_title()
    {
      return title;
    }
    void set_page(int new_page)
    {
      page = new_page;
    }
    int get_page()
    {
      return page;
    }

};

Book::Book()
{
  title = "";
  page = 0;
}

int main()
{
  Book KingArthur;
  cout << "\nTitle: " << KingArthur.get_title() << " Page = " << KingArthur.get_page() << "\n";
  KingArthur.set_title("King Arthur");
  KingArthur.set_page(547);
  cout << "\nTitle: " << KingArthur.get_title() << " Page = " << KingArthur.get_page() << "\n";
};
