//FUNKCJE CZYSTO WIRTUALNE I KLASY ABSTARKCYJNE

#include <iostream>
#include <cstdlib>

using namespace std;

class figura //klasa abstarakcyjna, gdy ma w sobie cho�by jedn� funkcje czysto wirtualn�-w�wczas nie da si� zdefiniowa� �adnego obiektu tej klasy
{
      protected:
                int pozycja_x;
                int pozycja_y,
                kolor;
      public:
             void przesun(int delta_x, int delta_y)
             {    
                  pozycja_x += delta_x;
                  pozycja_y += delta_y;
             }
             void virtual narysuj() = 0;//funkcja czysto wirtualna
};

class kwadrat : public figura
{
      public: 
      void narysuj() //musi by� zdefiniowana
      {
              cout<<"Rysuje kwadrat"<<endl;
      }
      kwadrat(int x,int y, int k)
      {
              pozycja_x = x;
              pozycja_y = y;
              kolor = k;            
      }
};

class trojkat : public figura
{
      public: void narysuj()
      {
              cout<<"Rysuje trojk�t"<<endl;        
      }    
};

int main()
{
    kwadrat k(10,10,1);
    //k.pozycja_y = 11; - bo chroniona tylko funkcje mog� z nich korzysta�
    trojkat t;
    //figura f; - b��d
    figura *wf;
    wf = &k;
    wf -> narysuj();//rysuje tr�jk�t 
    wf = &t;
    wf -> narysuj();//rysuje tr�jk�t
    t.narysuj();//rysuje tr�jk�t   
    
    system ("PAUSE");
    return 0;   
}
