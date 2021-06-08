#include <iostream>
using namespace std;
/* Konwersja typu, rzutowanie typu - 
umo¿liwiaj¹ca traktowanie danej pewnego, 
konkretnego typu, jak dan¹ innego typu*/
class zespolona
{
      public: 
              float rzeczywista;
              float urojona;
              
              zespolona(float r, float i):rzeczywista(r), urojona(i){}
              //konstruktor jako konwerter
              zespolona(float r):rzeczywista(r){}
              //funkcja konwertuj¹ca
              operator int()
              {
                       return (int) rzeczywista;//rzutowanie
              }
};
int suma(int a, int b)
{
    return a+b;
}
int main()
{
    zespolona z(10,3);
    cout<<suma(z,10);
    
    system("PAUSE");
    return 0;
}
