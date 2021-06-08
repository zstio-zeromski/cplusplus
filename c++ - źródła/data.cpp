#include <iostream>

using namespace std;
enum dzientygodnia {poniedzialek=0, wtorek, sroda, czwartek, piatek, sobota, niedziela};
enum miesiac {styczen, luty, marzec, kwiecien, maj, czerwiec, lipiec, sierpien, wrzesien, pazdziernik, listopad, grudzien}; 
class data
{
      protected:
                int d;
                miesiac m;
                int r;
                static int dniMiesiacaOdPoczatkuRoku[2][12];
                static int iledniwmiesiacu[2][12];
                static const data poczatek;
      public:
             data(int d, miesiac m,int r); 
             bool czyprzestepny(int r); 
             bool czypoprawna();  
             int iledniodpoczatku();
             dzientygodnia ktorydzientygodnia();
             friend void podajdate();
             friend void wypiszdate(data d1);
             void wypiszdzientygodnia();
};
data mojadata(0,(miesiac)0,0);
bool data::czypoprawna()
{
         if((m >= 0) && (m < 12))//poprawny miesiac
         {
               if((d > 0) && (d <= iledniwmiesiacu[czyprzestepny(r)][m])) return true;
               else return false;
         }
         else
             return false;
}
void wypiszdate(data d1)
{
     if (d1.czypoprawna())
     {
        cout<<d1.d<<"."<<d1.m+1<<"."<<d1.r<<endl;
        if(d1.czyprzestepny(d1.r) == true) cout<<"Rok przestêpny \n";
        else cout<<"Rok zwyk³y \n"; 
        d1.wypiszdzientygodnia();
     } 
     else
     {
         cout<<"DATA NIEPOPRAWNA!!!\n";
     }   
}
void data::wypiszdzientygodnia()
{
    switch (ktorydzientygodnia())
    {
           case 0:
                 cout<<"Poniedzia³ek \n";
                 break;
           case 1:
                 cout<<"Wtorek \n";       
                 break;
           case 2:
                 cout<<"Œroda \n";       
                 break;
           case 3:
                 cout<<"Czwartek \n";       
                 break;
           case 4:
                 cout<<"Piatek \n";       
                 break;
           case 5:
                 cout<<"Sobota \n";       
                 break;
           case 6:
                 cout<<"Niedziela \n";       
                 break;
    }  
}
void podajdate()
{
     int d,m,r;
     cout<<"Podaj date po 15 paŸdzierniku 1582 r \n";
     cout<<"Dzieñ: \n";  
     cin>>d;
     cout<<"Miesi¹c (1-12):\n";
     cin>>m;
     m -= 1;
     cout<<"Rok: \n";
     cin>>r;
     mojadata.d = d;
     mojadata.m = (miesiac)m;
     mojadata.r = r;
       
}
int data::dniMiesiacaOdPoczatkuRoku[2][12] = {{31,59,90,120,151,181,212,243,273,304,334,365},
                                       {31,60,91,121,152,182,213,244,274,305,335,366}}; 
int data::iledniwmiesiacu[2][12] = {{31,28,31,30,31,30,31,31,30,31,30,31},{31,29,31,30,31,30,31,31,30,31,30,31}};
data const data::poczatek(15, pazdziernik, 1582);
data::data(int d, miesiac m,int r)
{
               this->d = d;
               this->m = m;
               this->r = r;   
}
bool data::czyprzestepny(int r)
{
     if (((r%4 == 0) && (r%100 != 0)) || (r%400 == 0)) 
         return true;
     else
         return false;
}
int data::iledniodpoczatku()
{
        int ile = 0; //ile dni
        for(int i=1583; i<r; i++)
        {
                if(czyprzestepny(i))
                                    ile += 366;
                else ile += 365;        
        }
        //+ dni do koñca 1583 
        ile = ile + (365 - dniMiesiacaOdPoczatkuRoku[0][data::poczatek.m-1] - data::poczatek.d);
        //+ dni obecnego roku
        if(czyprzestepny(r))
                            ile = ile + dniMiesiacaOdPoczatkuRoku[1][m-1] + d;
        else                
                            ile = ile + dniMiesiacaOdPoczatkuRoku[0][m-1] + d;
        return ile;
}
dzientygodnia data::ktorydzientygodnia()
{
          int ile = iledniodpoczatku();
          //cout<<ile<<endl;
          if(ile%7 == 1) return sobota;
          if(ile%7 == 2) return niedziela;
          if(ile%7 == 3) return poniedzialek;
          if(ile%7 == 4) return wtorek;
          if(ile%7 == 5) return sroda;
          if(ile%7 == 6) return czwartek;
          if(ile%7 == 0) return piatek;
                           
}
int main()
{
    system("chcp 1250");
    
    cout<<"\nPrzyk³adowa data:\n";
    data d1(30, maj, 2000);//wtorek
    wypiszdate(d1);
    
    cout<<endl;     
    podajdate();
    wypiszdate(mojadata); 
    
    system("PAUSE");
    return 0;
}
