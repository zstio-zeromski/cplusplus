#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	string imie;
	int ile;
	string szukana_data;
	string szukane_imie;
	string data;
	int ile_imion=0;

	cout << "Podaj ile imienin chcesz wpisac" << endl;
	cin >> ile;

	ofstream s1("imieniny.txt", ios::app);
	for (int i = 0; i < ile; i++) {

		cout << "Podaj date w formacie dd.mm" << endl;
		cin >> data;

		cout << "Podaj imie" << endl;
		cin >> imie;

		s1 << data << " " << imie << endl;

	}
	s1.close();

	// imieniny danego dnia
	cout << "Podaj szukana date" << endl;
	cin >> szukana_data;

	cout<<"Imieniny w dniu "<<szukana_data<<" obchodza: "<<endl;
	ifstream s2("imieniny.txt");
	while (!s2.eof()) {
		s2 >> data;
		s2 >> imie;

		//Gdy jest pusta linia
		if (s2.eof()) {
			break;
		}

		//danego dnia sa obchodzone jakies imieny 
		if (data == szukana_data) {
			cout << imie << endl;
			ile_imion = ile_imion+1;
		}
	}
	cout<<szukana_data<< " imieniny obchodza "<<ile_imion<< " imion"<<endl;

	s2.close();


	//daty imienin dla konkretnego imienia
	cout << "Podaj szukane imie" << endl;
	cin >> szukane_imie;

	cout<<"Imie "<<szukane_imie<<" obchodzi imienny dnia: "<<endl;
	ifstream s3("imieniny.txt");
	while (!s3.eof()) {
		s3 >> data;
		s3 >> imie;

		//Gdy jest pusta linia
		if (s3.eof()) {
			break;
		}
		if (imie == szukane_imie) {
			cout << data << endl;
		}
	}
	s3.close();
}
