#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	string data, imie;
	string szukana_data;
	int ile;
	
	cout<<"podaj ile imienin chcesz wpisac"<<endl;
	cin>>ile;
	
	ofstream s1("imieniny.txt",ios::app);
	for(int i=0; i<ile; i++)
	{
	
	
		cout<<"podaj date w formacie dd.mm"<<endl;
		cin>>data;
		
		cout<<"podaj imie"<<endl;
		cin>>imie;
		
		s1<<data<<" "<<imie<<endl;	
	}
	s1.close();
	
	cout<<"Podaj szukana date dd.mm"<<endl;
	cin>>szukana_data;
	
	
	ifstream s2("imieniny.txt");
	while(!s2.eof())
	{
		s2>>data;
		s2>>imie;
		//ddy pusta linia
		if(s2.eof()) break;
		
		if(data==szukana_data) 
		{
			cout<<imie<<"\t";
		}	
	}
	
	
	
}
