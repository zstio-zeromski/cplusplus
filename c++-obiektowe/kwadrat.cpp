#include <iostream>
using namespace std;

class Kwadrat {
	public:
		int dlugosc_boku;//pole
		int licz_pole();//metoda
};

int Kwadrat::licz_pole()//funkcja sk³adowa klasy kwadrat, metoda klasy kwadrat
{
	return dlugosc_boku * dlugosc_boku;
}

int main()
{
	Kwadrat moj_kwadrat;//obiekt
	moj_kwadrat.dlugosc_boku = 5;
	cout << "Pole kwadratu wynosi: " << moj_kwadrat.licz_pole()<<endl;
	Kwadrat moj_kwadrat1;//obiekt
	moj_kwadrat1.dlugosc_boku = 10;
	cout << "Pole kwadratu wynosi: " << moj_kwadrat1.licz_pole()<<endl;
	return 0;
}
