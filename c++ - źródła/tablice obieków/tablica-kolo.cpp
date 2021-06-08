//Tablice obiektów klasy 

#include <iostream>
#include <String>
#include <cstdlib>
#include <cmath>

using namespace std;

class Kolo {
	public:
		double promien;//pole
		double licz_pole();//metoda
		double licz_obwod();//metoda
};


double Kolo::licz_pole()//funkcja sk³adowa klasy kwadrat, metoda klasy kwadrat
{
	return M_PI*promien*promien;
}

double Kolo::licz_obwod()//funkcja sk³adowa klasy kwadrat, metoda klasy kwadrat
{
	return 2*M_PI*promien;
}

int main()
{
	int n = 10;
	Kolo moje_kola[n];//tablica obiektów
	
	for(int i=0; i<n; i++)
	{
			moje_kola[0].promien = rand()%100*1.0;
			cout<<"Pole "<<i<<" tego kola wynosi "<<moje_kola[0].licz_pole()<<" obwod wynosi"<<moje_kola[0].licz_obwod()<<endl;
	}
	
	return 0;
}
