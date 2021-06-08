#include <iostream>
#include <string>
using namespace std;
class Pracownik {
	public:
		string nazwisko;//pole
		string imie; //pole
		
		//konstruktory
		Pracownik();
		Pracownik(string nowe_nazwisko);
		Pracownik(string nowe_nazwisko, string nowe_imie);
		~Pracownik(); // destruktor
};
Pracownik::~Pracownik()
{
	nazwisko="";
	imie="";
}
Pracownik::Pracownik()//domyœlny
{
	nazwisko="Anonim";
	imie="Gal";
}
Pracownik::Pracownik(string nowe_nazwisko)
{
 	//konstruktor z jednym parametrem
	nazwisko = nowe_nazwisko;
}
Pracownik::Pracownik(string nowe_nazwisko, string nowe_imie)
{
	// konstruktor z dwoma parametrami
	nazwisko = nowe_nazwisko;
	imie = nowe_imie;
}
int main()
{
	Pracownik pracownik1;
	Pracownik pracownik2 ("Kowalski");
	Pracownik pracownik3 ("Kowalski", "Jan");
	
	cout<<"Pracownik 1: "<<pracownik1.nazwisko<<" "<<pracownik1.imie<<endl;
	cout<<"Pracownik 2: "<<pracownik2.nazwisko<<" "<<pracownik2.imie<<endl;
	cout<<"Pracownik 3: "<<pracownik3.nazwisko<<" "<<pracownik3.imie<<endl;
	pracownik3.imie="Marek";
	cout<<"Pracownik 3: "<<pracownik3.nazwisko<<" "<<pracownik3.imie<<endl;
	
}
