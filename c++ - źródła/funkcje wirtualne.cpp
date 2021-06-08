/* FUNKCJE WIRTULANE */

#include <iostream>
#include <cstdlib>

using namespace std;

class instrument
{
                int cena;
      public:
                virtual void wydaj_dzwiek()
                {
                     cout<<"Nieokreslony brzdêk ! \n";
                }
};

class trabka : public instrument
{
      public:
             void virtual wydaj_dzwiek()
             {
                  cout<<"Tra-ta-ta ! \n";
             } 
};

class beben : public instrument
{
      public:
             void wydaj_dzwiek()
             {
                  cout<<"Bum-bum-bum ! \n";
             }
};

class fortepian : public instrument
{
      public:
             void wydaj_dzwiek()
             {
                  cout<<"Plim-plim-plim ! \n";
             }    
};
          
int main()
{
    instrument i;
    trabka t;
    fortepian f;
    beben b;
    
    cout<<"Wywo³anie funkcji sk³¹dowych na rzecz obiektów \n";
    i.wydaj_dzwiek();
    t.wydaj_dzwiek();
    f.wydaj_dzwiek();
    b.wydaj_dzwiek();
    
    instrument *wsk;
    wsk = &i;
    wsk->wydaj_dzwiek();
    
    wsk = &t;
    wsk->wydaj_dzwiek();
    
    wsk = &f;
    wsk->wydaj_dzwiek();
    
    wsk = &b;
    wsk->wydaj_dzwiek();
        
    system("PAUSE");
    return 0;   
}
