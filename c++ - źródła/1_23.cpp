#include <iostream>

using namespace std;

class stos
{
      int dane;
      stos *wskaznik;
      public:
      static stos* wierzcholek;    
      friend void push(int element);
      friend void pop();
      friend void front();
      stos(int dane, stos* wierzcholek);
};
stos::stos(int dane, stos *wskaznik)
{
               this->dane = dane;
               this->wskaznik = wskaznik;
}
void push(int element)
{
     cout<<"Dodanie lementu do stosu: "<<element<<endl;
     if(stos::wierzcholek == NULL)
     {
                          stos *pom = new stos(element,NULL);
                          stos::wierzcholek = pom;
     }
     else
     {
                          stos *pom = new stos(element,stos::wierzcholek);
                          stos::wierzcholek = pom;
     }
}
void pop()
{
     cout<<"usówam element ze stosu"<<endl;
     stos *pom = stos::wierzcholek->wskaznik;
     delete(stos::wierzcholek);
     stos::wierzcholek = pom;
}
void front()
{
     if(stos::wierzcholek == NULL)
                          cout<<"Brak elementów w stosie"<<endl;
     else
                          cout<<"Element na wierzchu stosu to: "<<stos::wierzcholek->dane<<endl;
}
stos* stos::wierzcholek = NULL;
int main()
{
    push(10);
    push(11);
    front();
    pop();
    front();
    pop();
    front();
    push(12);
    front();
    pop();
    front();
    cout<<endl<<"DZIWNE ZE DZIALA !!!"<<endl;
    system("PAUSE");
    return 0;
}   
