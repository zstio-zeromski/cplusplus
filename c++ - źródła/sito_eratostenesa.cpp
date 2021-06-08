#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cout<<"podaj wartoœc naturalna n"<<endl;
	cin>>n;
	int tablica[n+1];
	for(int i=0; i<n+1; i++)
	{
		tablica[i]=i;
		cout<<tablica[i]<<"\t";
	}
	cout<<endl;
	
	//0 bedzie wykreslonym elementem
	tablica[1]=0;
	
	int min=tablica[2];//przechowuje minimalny element tablicy, do wykreslania wilokrotnosci
	int wielok;//wielokrotnosc liczby min
	int ile;
	while(min<=sqrt(n))//do kiedy ma wykreœlaæ
	{
		ile =2;
		wielok = min*ile;
		
		while(wielok<=n)//wykreslanie elementow wielokrotnosci
		{
			tablica[wielok]=0;//wykreslanie elementow
			ile++;
			wielok = min * ile;	
	
		}
		//do przejscia do kolejnej minimalnej wartosci (nie wykreslonej)
		for(int i=min+1;i<n+1;i++)
		{
			min++;
			if(tablica[min]!=0) break;
		}
	}
	
	cout<<"\nLiczby pierwsze z zakresu od 2 do "<<n<<": "<<endl;
	for(int i=0; i<n+1; i++)
	{
		if(tablica[i]!=0) cout<<tablica[i]<<"\t";
	}
	return 0;
}
