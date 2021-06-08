/*Unia jest podobna do struktury, jednak wszystkie pola zajmuj¹ ten sam obszar pamiêci - rozmiar unii jest równy rozmiarowi najwiêkszego jej sk³adnika.*/
#include <iostream>
union skarbiec
{
      //moze mieæ public i private (nie mo¿e mieæ protected bo nie jest dzidziczone)
      char c;
      int i;
      double d;
      //bez stringa -  bo skaldnikiem uni nie mo¿e zostaæ obiekt który ma konstruktor
      int wypisz();
};

int main()
{
    skarbiec s1,s2;
    s1.d = 3.14;
    std::cout<<s1.c<<std::endl;//jakiœ znak ascii
    std::cout<<s1.i<<std::endl;//1374.....
    std::cout<<sizeof(s1)<<std::endl;//8 bajtów
    //std::cout<<sizeof(skarbiec); - to samo co instrukcja wy¿ej
    std::cout<<sizeof(char)<<std::endl; // 1 bajt
    std::cout<<sizeof(int)<<std::endl; //4 bajty
    std::cout<<sizeof(double)<<std::endl; //8 bajtów
    std::cout<<sizeof(std::string)<<std::endl;//4 bajty
    system("PAUSE");
    return 0;
    
}
