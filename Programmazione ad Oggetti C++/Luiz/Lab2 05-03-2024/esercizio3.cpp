#include <iostream>
#include <string>
namespace std;

class Money
/*
  Un operatore ‘+’ definito come funzione non-membro: Money operator+(Money m1, Money m2)
che esegue la somma di due oggetti Money sommando euro e centesimi (i centesimi se
eccedono il valore di 100 vanno convertiti in euro: es 10.50 euro+ 5.70 euro= 16.20 euro)
  Un operatore ‘<<’ definito come funzione non-membro: ostream& operator<<(ostream& os,
Money m) per stampare a video i dati membri euros e cents
*/
{
  private:
  {
    int euros;
    int cents;
  }
  public:
    Money(int new_euros = 0, int new_cents = 0)
    {
      euros = new_euros;
      cents = new_cents;
    }
    int get_euros()
    {
      return euros;
    }
    void set_euros(int new_euros)
    {
      euros = new_euros
    }
    int get_cents()
    {
      return cents;
    }
    void set_cents(int new_cents)
    {
      cents = new_cents;
    }
};


class CreditCard
{
  private:
  {
    string owner;
    string card_number;
    Money Total_paid;
  }
  public:
  {
    CreditCard(string new_owner, string new_card_number)
    {
      owner = new_owner;

      card_number = new_card_number;  
    }
    void print()
    {
      cout << "Owner: " << owner << "Card Number: " << card_number << "\n";
    }
    Money get_total_charges()
    {
      return Total_paid;
    }
    void charge(int euros, int cents)
    {
      int new_euros;
      int new_cents = cents + Total_paid.get_cents();
      if new_cents >= 100:
      {
        new_euros += 1;
        new_cents -= 100;
      }
      Total_paid.set_cents(new_cents) 
      Total_paid.set_euros(new_euros)


    }
  }
};

int main()
/*
  Il programma principale crea un oggetto di tipo CreditCard, legge da un file di testo un elenco di spese e
aggiorna il totale dei pagamenti. Il file di testo delle spese contiene per ogni riga le informazioni di una
singola spesa su tre colonne: <causale della spesa> <euro> <centesimi>
es:
book 90 60
pizza 20 50
*/
{

}
