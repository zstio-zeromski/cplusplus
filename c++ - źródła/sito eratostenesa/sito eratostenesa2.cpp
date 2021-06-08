#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int n=25;
	bool tab[n+1];
	int z=sqrt(n);
	cout<<z<<endl;
	
	for(int i=2; i<n+1; i++)
	{
		tab[i]=true;
	}
	
	for(int i=2;i<=z;i++)//kontroluje wartosci do wielkorotnœci
	{
		for(int j=2*i;j<n+1;j++)//wartosci do wykreslenia
		{
			if(j%i==0)//czy liczba jest wielkokrotnoscia i
			{
				tab[j]=false;//wykreslenie liczby	
			}
		}
	}
	cout<<"Liczby pierwsze z przedia³u od 2 do "<<n<<": "<<endl;
	for(int i=2;i<n+1;i++)
	{
		if(tab[i]==true)
		{
			cout<<i<<" ";
		}	
	}
	return 0;	
}

