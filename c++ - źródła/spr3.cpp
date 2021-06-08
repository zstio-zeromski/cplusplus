#include <iostream>
#include <cstdlib>
using namespace std;


class Podstawowa{
      public:
             int X,Y,Z;
             Podstawowa(int , int,  int);
             int wypiszZ( ) { return Z;} 
             void podajZ(int Z1) { Z = Z1; }
             void virtual przedstaw() =0;
};
class Pochodna:public Podstawowa
{
      public:
             double wiek;
             Pochodna():Podstawowa(0,0,0) {wiek=0;}
             int wypiszZ(){return Z;}
             void virtual przedstaw ();
      
};
void Pochodna::przedstaw(){ cout<<X<<Y<<Z<<wiek;}
Podstawowa::Podstawowa(int x, int y, int z)
{
       X=x;
       Y=y;
       Z=z;                        
}

int main()
{
    //Podstawowa ob1(0,0,0); - b³¹d bo klasa abstrakcyjna
    Pochodna ob1;
    Pochodna tab[10];
    Podstawowa *wsk;
    ob1.wypiszZ();
    ob1.przedstaw();
    ob1.podajZ(10);
    
    wsk=&ob1;
    cout<<wsk->wypiszZ();
    
    system("PAUSE");
    return 0;
}
