#include <iostream>
#include <cstdlib>
#include <fstream>

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
               ulamek c;//wynik
               if(a.mianownik==mianownik)
               {
               		c.licznik = a.licznik + licznik;
               		c.mianownik = a.mianownik;
			   }
			   else
			   {
	               c.mianownik=mianownik*a.mianownik;//sprowadzanie do wspólnego mianownika
	               c.licznik=(licznik*a.mianownik)+(a.licznik*mianownik);
	        	}
               return c;                            
              
}
ulamek ulamek::operator-(ulamek a)
{
	 			ulamek c;
				if(a.mianownik==mianownik)
               {
               		c.licznik = a.licznik - licznik;
               		c.mianownik = a.mianownik;
			   }
			   else
			   {
	               c.mianownik=mianownik*a.mianownik;
	               c.licznik=(licznik*a.mianownik)-(a.licznik*mianownik);
        		}
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
               //zamiana licznika z mianownikiem
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
    ulamek u3;//wynik operacji
    
    cout<<"u³amek u1: "<<u1.licznik<<" / "<<u1.mianownik<<"\n";
    cout<<"u³amek u2: "<<u2.licznik<<" / "<<u2.mianownik<<"\n";
    cout<<"u³amek u3: "<<u3.licznik<<" / "<<u3.mianownik<<"\n";
    
    u3=u1*u2;
    cout<<"u1 * u2: "<<u3.licznik<<" / "<<u3.mianownik<<"\n";
    u3=u1+u2;
    cout<<"u1 + u2: "<<u3.licznik<<" / "<<u3.mianownik<<"\n";
    u3=u1-u2;
    cout<<"u1 - u2: "<<u3.licznik<<" / "<<u3.mianownik<<"\n";
    u3=u1/u2;
    cout<<"u1 / u2: "<<u3.licznik<<" / "<<u3.mianownik<<"\n";
    
    ulamek tab_ula[10];
    for(int i = 0; i<10; i++)
	{
		tab_ula[i].licznik = rand()%10;
		tab_ula[i].mianownik = rand()%10;
	}
	 cout<<"u³amek z tablicy: "<<tab_ula[0].licznik<<" / "<<tab_ula[0].mianownik<<"\n";
   
   ofstream  ofs("ulamek.txt");
   ofs<<"u³amek z tablicy: "<<tab_ula[1].licznik<<" / "<<tab_ula[1].mianownik<<"\n";
   
   ofs.close();
    system("PAUSE");
    return 0;   
}
