//Tablice obiektów klasy 

#include <iostream>
#include <String>
#include <cstdlib>

using namespace std;

class Kwadrat {
	public:
		double dlugosc_boku;//pole
		string nazwa;
		double licz_pole();//metoda
};


double Kwadrat::licz_pole()//funkcja sk³adowa klasy kwadrat, metoda klasy kwadrat
{
	return dlugosc_boku * dlugosc_boku;
}

int main()
{
	int n = 10;
	Kwadrat moje_kwadraty[n];//tablica obiektów
	moje_kwadraty[0].dlugosc_boku = 3.4;
	cout<<"Pole wynosi "<<moje_kwadraty[0].licz_pole()<<endl;
	for(int i=0; i<n; i++)
	{
			moje_kwadraty[0].dlugosc_boku = rand()%100*1.0;
			cout<<"Pole "<<i<<" tego kwadratu wynosi "<<moje_kwadraty[0].licz_pole()<<endl;
	}
	
	return 0;
}
