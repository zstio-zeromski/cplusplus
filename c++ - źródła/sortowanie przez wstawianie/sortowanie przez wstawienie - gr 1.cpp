#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int n=10;
		
		int tab[n];
		for(int i=0;i<n;i++)
		{
			tab[i]=rand()%100+1;
			cout<<tab[i]<<"\t";
		}
		cout<<endl;
		int k; //indeks minimalnego elementu
		int min;
		for(int i=0;i<n-1;i++)
		{
			min=tab[i];
			k=i;
			for(int j=i+1;j<n;j++)
			{
				if(tab[j]<min)
				{
					min=tab[j];
			 	    k=j;
				}	      										
			}
			//cout<<min<<endl;
		swap(tab[i],tab[k]);
		}
		for(int i=0;i<n;i++)
		{
			cout<<tab[i]<<"\t";
		}	
	return 0;
}
