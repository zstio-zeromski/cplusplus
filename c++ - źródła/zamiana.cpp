#include <iostream>
using namespace std;
//PRZEKAZYWANIE ARGUMENT�W FUNCJI PRZEZ WARTO�� I REFERENCJE
void zamiana1(int a, int b)//przez warto�� - dzia�a na kopi zmiennej
{
	int pom=a;
	a=b;
	b=pom;
}
void zamiana2(int &a, int &b)//przez referencje - dzia�a na oryginalnej zmiennej
{
	int pom=a;
	a=b;
	b=pom;
}

int main()
{
	int c=10, d=20;
	cout<<"zmienne przed zamiana: "<<c<<" "<<d<<endl;
	zamiana1(c,d);
	cout<<"zmienne po zamianie1 (wartosc): "<<c<<" "<<d<<endl;
	zamiana2(c,d);
	cout<<"zmienne po zamianie2 (referencja): "<<c<<" "<<d<<endl;
	return 0;
}
