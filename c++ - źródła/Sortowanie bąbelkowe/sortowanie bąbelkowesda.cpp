#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
 int n; 
 n=10;
 int tab[n];
 for(int i=0;i<n;i++)
 {
 	tab[i]=rand()%100+1;//randomowe liczby do 100 od 1
	 cout<<tab[i]<<"\t";	 
 }
 cout<<endl;
 for(int i=0; i<n-1;i++)
 {
 	
  	for(int j=0;j<n-1-i;j++)
	{
 		if(tab[j+1]<tab[j])
 			swap(tab[j+1], tab[j]);	
 	}	
 }
 for(int i=0;i<n;i++)
 {
	 cout<<tab[i]<<"\t";	 
 }

 
 
 return 0;
}
