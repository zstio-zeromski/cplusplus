#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	const int rozmiar=10;

	int t1[rozmiar];

	for(int i=0;i<rozmiar;i++)
	{
		t1[i]=rand() % 100 + 1;
	}
	//suma elementów
	int suma = 0;
	for(int i=0;i<rozmiar;i++)
	{
		suma = suma + t1[i];
		cout<<i<<"\t"<<t1[i]<<"\t suma: "<<suma<<endl;
	}
	cout<<"suma elementów tablicy wynosi: "<<suma<<endl;
	//wyœwietle parzyste wartosci tablicy
	cout<<"Liczby parzyste: "<<endl;
	for(int i=0;i<rozmiar;i++)
	{
		if(t1[i]%2==0)
		{
			cout<<t1[i]<<endl;	
		}	
	}
	
	 
	
	return 0;	
}
