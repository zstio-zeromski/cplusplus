#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;
class punkt {
      public:
             float x,y;
      private:
              float pri;
      protected:
                float pro;
      public:      
             punkt (float, float);
             void wypisz();
             friend void przesun(punkt &p, float x1, float y1);    
};
punkt::punkt(float x, float y)
{
             this->x=x;
             this->y=y;                
}
void punkt::wypisz()
{
     cout<<x<<" "<<y<<"\n";    
}
void przesun(punkt &p, float x1, float y1)
{
     p.x=p.x+x1;
     p.y=p.y+y1;
}
class lepszy_punkt : public punkt {
      public:

             char opis[10];
             
             lepszy_punkt(float x, float y, char opis[]);
             void wypisz();
};
lepszy_punkt::lepszy_punkt(float x, float y, char opis[]):punkt(x,y)
{
      strcpy(this->opis, opis);
      pro=10;//tylko w funkcji moze byc wykorzystana
      //pri=10; //b³ad bo pryvatna                               
}
void lepszy_punkt::wypisz()
{
     cout<<this->opis<<" ";
     cout<<x<<" "<<y<<"\n";
}
int main()
{
    punkt p(0,0);
    lepszy_punkt lp1(10,11,"punkt A");
    //lp1.pro = 10;
    lp1.wypisz();//punkt A 10 11
    lp1.punkt::wypisz();//10 11
    lp1.x=10;
    //przesun(lp1,10,10);
    //lp1.punkt::wypisz();//20 21
    //lp1.pro=10; //publiczna ale tylko w metodach klasy lepszy_punkt
    system("PAUSE");
    return 0;   
}
