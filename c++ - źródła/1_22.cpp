#include <iostream>
#include <cstdlib>
using namespace std;

class ulamek{
public: 
        int licznik;
        int mianownik;
        ulamek operator+(ulamek);
        ulamek operator-(ulamek);
        ulamek operator*(ulamek);  
        ulamek operator/(ulamek); 
        ulamek(int, int);
        ulamek();
        ~ulamek();      
};
ulamek::~ulamek()
{
                 licznik=0;
                 mianownik=0;
}
ulamek::ulamek()
{               
                licznik=0;
                mianownik=0;
}                   
ulamek::ulamek(int l, int m)
{
               licznik=l;
               mianownik=m;                  
}
ulamek ulamek::operator+(ulamek a)
{
               ulamek c;
               c.mianownik=mianownik*a.mianownik;
               c.licznik=(licznik*a.mianownik)+(a.licznik*mianownik);
               return c;                            
              
}
ulamek ulamek::operator-(ulamek a)
{
               ulamek c;
               c.mianownik=mianownik*a.mianownik;
               c.licznik=(licznik*a.mianownik)-(a.licznik*mianownik);
               return c;                            
              
}
ulamek ulamek::operator*(ulamek a)
{
               ulamek c;
               c.licznik=licznik*a.licznik;
               c.mianownik=mianownik*a.mianownik;
               return c;                            
              
}
ulamek ulamek::operator/(ulamek a)
{
               ulamek c;
               int pom;//przechowuje licznik
               pom=a.licznik;
               a.licznik=a.mianownik;
               a.mianownik=pom;
               c=(*this)*a;
               return c;                            
              
}
int main()
{
    ulamek u1(1,2);
    ulamek u2(2,3);
    ulamek u3(0,0);//wynik operacji
    
    cout<<"u³amek u1: "<<u1.licznik<<" / "<<u1.mianownik<<"\n";
    cout<<"u³amek u2: "<<u2.licznik<<" / "<<u2.mianownik<<"\n";
    
    u3=u1*u2;
    cout<<"u1 * u2: "<<u3.licznik<<" / "<<u3.mianownik<<"\n";
    u3=u1+u2;
    cout<<"u1 + u2: "<<u3.licznik<<" / "<<u3.mianownik<<"\n";
    u3=u1-u2;
    cout<<"u1 - u2: "<<u3.licznik<<" / "<<u3.mianownik<<"\n";
    u3=u1/u2;
    cout<<"u1 / u2: "<<u3.licznik<<" / "<<u3.mianownik<<"\n";
   
    system("PAUSE");
    return 0;   
}
