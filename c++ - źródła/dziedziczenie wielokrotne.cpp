///////////////////////////////////////////////////////////////////////////////
//  DZIEDZICZENIE WIELOKROTNE
//  RYZYKO WIELOZNACZNOŒCI PRZY DZIEDZICZENIU
///////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <cstdlib>

using namespace std;
///////////////////////////////////////////////////////////////////////////////
class samochod
{
      public:
                int a;
                int x;
                samochod(int arg):a(arg),x(arg)
                {
                             cout<<"Konstruktor samochodu\n";             
                }
};
///////////////////////////////////////////////////////////////////////////////
class lodka
{
      public:
                int b;
                int x;
      public:
             lodka(int arg):b(arg),x(arg)
             {
                       cout<<"konstruktor lodki\n";
             }    
      
};
///////////////////////////////////////////////////////////////////////////////
class amfibia : public samochod, lodka
{
      public:
             amfibia():samochod(1991), lodka(4)
             {
                                       cout<<"Konstruktor amfibii\n";
             }
             
             void pisz_skladniki()
             {
                  cout<<"Oto dziedziczone skladniki\na = "
                  << a << "\t b = " << b <<  "\t "<<endl;
                  //cout<<"x = " << x <<endl;//b³ad bo niewie które x wypisac czy z klasy samochod czy lodka
                  cout<<"Z klasy samochod: x = " << samochod::x<<endl;//1991
                  cout<<"Z klasy lodka: x = " << lodka::x<<endl;//4 
             }
             int amfibia::x()
             {
                 return samochod::x;
             }
};
///////////////////////////////////////////////////////////////////////////////
int main()
{
    amfibia aaa;
    aaa.pisz_skladniki();
    
    samochod *sw;
    lodka *lw;
    sw = &aaa;
    cout<<sw->x<<endl;//1991 - z klasy samochod
    system("PAUSE");
    return 0;   
}
//  Konstruktor samochodu
//  Konstruktor lodki
//  Konstruktor amfibii
//  Oto odziedziczone skladniki
//  a = 1991          b = 4
//  Z klasy samochod: x = 1991
//  Z klasy lodka: x = 4
//  1991


