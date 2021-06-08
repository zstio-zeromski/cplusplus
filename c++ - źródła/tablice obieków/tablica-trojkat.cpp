//Tablice obiektów klasy 

#include <iostream>
#include <String>
#include <cstdlib>

using namespace std;

class Trojkat {
	public:
		double wysokosc;
		double podstawa;
		double policz_pole();
};

double Trojkat::policz_pole()
{
	return 0.5*wysokosc*podstawa;
}

int main()
{
	const int n=100;//rozmiar tablicy
	Trojkat tablica[n];
	
	tablica[0].wysokosc = 10.5;
	tablica[0].podstawa = 3.9;
	
	cout<<"Pole wynosi "<<tablica[0].policz_pole()<<endl;
	
	for(int i=0; i<n; i++)
	{
			tablica[i].wysokosc = rand() % 100;
			tablica[i].podstawa = rand() % 100;
	
			cout<<"Pole "<<i<<" tego elementu wynosi "<<tablica[i].policz_pole()<<endl;
	}
		
	return 0;	
}

