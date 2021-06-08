/*struktura - to prota klasa, w której przez domniemanie wszystekie sk³adniki sa publiczne*/

#include <iostream>
#include <string>

using namespace std;
struct punkt
{
       int x;
       int y;
       static string nazwa;
       static void wypisz();      
       
};
string punkt::nazwa;
void punkt::wypisz()
{
   cout<<nazwa<<endl; //mo¿na dzia³ac tylko na zmiennych statycznych  
}
int main()
{
    punkt::nazwa = "punkt";
    punkt u1;
    u1.x = 10;
    u1.y = 11;
    u1.wypisz();
    cout<<"("<<u1.x<<"  "<<u1.y<<")"<<endl;
    
    system("PAUSE");
    return 0;
    
} 
