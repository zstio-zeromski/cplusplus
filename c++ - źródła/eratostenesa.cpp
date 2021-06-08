#include <iostream>
using namespace std;
 
const int n = 20;
 
bool numbersTable[n + 1]; // tablica o indeksach od 0 do 100 | wszystkie false (czyli: 0);
 
int main()
{
	for (int i = 2; i*i <= n; i++ ) // przeszukuj liczby od 2 do sqrt(n), 0 i 1 nie s� liczbami pierwszymi
	{
		//if (numbersTable[i] == true) // je�eli dana liczb jest ju� wykre�lona
			//continue; // to przejd� do kolejnej
		for (int j = 2 * i ; j <= n; j += i) // przejd� od liczby 2 * i do n przesuwaj�c si� o i
			numbersTable[j] = true; // i ka�d� z nich usuwaj ze zbioru
	}
 
	cout << "Liczby pierwsze z przedzia�u od 2 do " << n << ":" << endl;
 
	for (int i = 2; i <= n; i++) // przeszukaj liczby od 2 do n
		if (numbersTable[i] == false) // je�li liczba nie zosta�a usuni�ta ze zbioru
			cout << i << endl; // to j� wypisz
	system("PAUSE");
	return 0;
}
