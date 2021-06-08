#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int n;//rozmiar tablicy
	cout<<"podaj rozmiar tablicy"<<endl;
	cin>>n;
	
	int tab[n];
	for(int i=0; i<n; i++)
	{
		//cout<<"podaj "<<i<<" ty element"<<endl;
		//cin>>tab[i];
		tab[i] = rand() % 10 + 1;
	}
	cout<<"elementy tablicy\n";
	for(int i=0; i<n; i++)
	{
		cout<<tab[i]<<"\t";
	}
	//max element
	int max=tab[0];
	for(int i=1;i<n;i++)
	{
		if(tab[i]>max) max = tab[i];
	}
	cout<<endl<<"max "<<max<<endl;
	
	int ile = 0;
	
	for(int i=0;i<n;i++)
	{
		if(tab[i] == max) ile++;
	}
	cout<<"maksymalnych elementow jest "<<ile<<endl;
	
float suma=0;
	for(int i=0; i<n;i++)
	{
		suma+=tab[i];
		
	}
	suma=suma/n;
	
	cout<<"srednia "<<suma<<endl;
	
	int i=0;
	do
	{
	if (tab[i]%2==0 )
		
		cout<<" parzysty element "<<tab[i];
		i++;
	}
	while(i<n);
	
		for(int i=0;i<n;i++)
	
	if	(tab[i]!=5)
	{
		cout<<tab[i]<<"\t";
	}
	else 
	{
		cout<<"*"<<"\t";
	}
	

		return 0;
}
