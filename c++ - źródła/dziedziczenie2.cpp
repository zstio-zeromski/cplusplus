#include <iostream>

using namespace std;

class osoba
{
      protected:
      string imie;
      string nazwisko;
      int wiek;
      public: 
      osoba(string imie, string nazwisko, int wiek);
      osoba();
};
class uczen:public osoba
{
      int klasa;
      public:
      uczen();
      uczen(int klasa);
      uczen(string imie, string nazwisko, int wiek, int klasa);
      void wypisz();
         
};
osoba::osoba()
{
              imie = "Gal";
              nazwisko = "Anonim";
              wiek = 100;            
}
osoba::osoba(string imie, string nazwisko, int wiek)
{
      this->imie = imie;
      this->nazwisko = nazwisko;
      this->wiek = wiek;                                       
}
uczen::uczen(int klasa):osoba("Gal","Anonim",100)//chyba ¿e bedzie konstruktor domniemany - wtedy tego nie trzeba
{
      this->klasa = klasa;                
}
uczen::uczen(string imie, string nazwisko, int wiek, int klasa)
{
                         
}
uczen::uczen()
{
    klasa = 0;
    imie = "Nie Gal";
}          
void uczen::wypisz()
{
     cout<<imie<<" "<<nazwisko<<" "<<wiek<<" "<<klasa<<endl;    
}
int main()
{
    uczen u;//konstruktor domniemany najpeirw klasy podtswowej potem klasy pochodnej
    u.wypisz();//Nie Gal Anonim 100 0
    //cout<<u.imie; - b³¹d bo chronione
        
    system("PAUSE");
    return 0;   
}
