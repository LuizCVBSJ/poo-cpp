#include <iostream>
#include <string>
using namespace std;

class Person
{
  private:
    string name;
    string surname;
    int age;

  public:
    string get_information()
    {
      string information;
      information = name.substr(0,1) + ". " + surname + ", " + to_string(age) + "\n";
      return information;
    }
    void set_surname(string new_surname)
    {
      surname = new_surname;
    }
    Person(string new_name = "", string new_surname = "", int new_age = 0)
    {
		  name = new_name;
		  surname = new_surname;
		  age = new_age;
	  }

};

int main()
{
  Person Giorgio("Giorgio", "Marda", 29);
  Person Cherry("Cherry", "Barra", 3);
  Person Barcella("Barcella", "Parocco", 62);
  
  const int n = 3;
  Person people[n] = {Giorgio, Cherry, Barcella};
  for (int i = 0; i < n; i++)
  {
    cout << people[i].get_information();
  }
  
  for (int i = 0; i < n; i++)
  {
    people[i].set_surname("Bianchi");
  }
  for (int i = 0; i < n; i++)
  {
    cout << people[i].get_information();
  }
};
