#include <iostream>
using namespace std;

int main()
{
 int i, tmp;
 tmp=0;
 cout << "podaj liczbe";
 cin >> i;
 for (int c=2;c<i;c++)
 {
     if ((i%c)==0){ tmp=1;
     break;}
 }
  if (tmp==1)cout << "to nie jest liczba pierwsza\n\n";
  else cout << "tak to jest liczba pierwsza\n\n";
  system("PAUSE");
  return 0;  
}
