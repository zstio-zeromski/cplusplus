 #include <iostream>
 
 const float pi = 3.14159;
 class Figura 
 {
   public:
     virtual float pole() const 
     {
       return -1.0;
     }
 };
 
 class Kwadrat : public Figura 
 {
   public:
     Kwadrat( const float bok ) : a( bok ) {}
 
     float pole() const 
     {
       return a * a;
     }
   private:
     float a; // bok kwadratu
 };
 
 class Kolo : public Figura 
 {
   public:
     Kolo( const float promien ) : r( promien ) {}
 
     float pole() const 
     {
       return pi * r * r;
     }
   private:
     float r; // promien kola
 };
 
 void wyswietlPole( Figura& figura ) 
 {
   std::cout << figura.pole() << std::endl;
   return;
 }
 
 int main() 
 {
   // deklaracje obiektow:
   Figura jakasFigura;
   Kwadrat jakisKwadrat( 5 );
   Kolo jakiesKolo( 3 );
   Figura* wskJakasFigura = 0; // deklaracja wskaŸnika
 
   // obiekty -------------------------------
   std::cout << jakasFigura.pole() << std::endl; // wynik: -1
   std::cout << jakisKwadrat.pole() << std::endl; // wynik: 25
   std::cout << jakiesKolo.pole() << std::endl; // wynik: 28.274...
 
   // wskazniki -----------------------------
   wskJakasFigura = &jakasFigura;
   std::cout << wskJakasFigura->pole() << std::endl; // wynik: -1
   wskJakasFigura = &jakisKwadrat;
   std::cout << wskJakasFigura->pole() << std::endl; // wynik: 25
   wskJakasFigura = &jakiesKolo;
   std::cout << wskJakasFigura->pole() << std::endl; // wynik: 28.274...
 
   // referencje -----------------------------
   wyswietlPole( jakasFigura ); // wynik: -1
   wyswietlPole( jakisKwadrat ); // wynik: 25
   wyswietlPole( jakiesKolo ); // wynik: 28.274...
 
   system("PAUSE");
   return 0;
 }
