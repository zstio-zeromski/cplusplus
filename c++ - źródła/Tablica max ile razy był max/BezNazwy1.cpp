#include <iostream>
using namespace std;

int main()
{
int n;
int x=0;
cout<<"podaj rozmiar tablicy"<<endl;
cin>>n;
int tab[n];
for(int i=0;i<n;i++)
{
	cout<<"podaj "<<i<<" element tablicy"<<endl;
	cin>>tab[i];
}
cout<<"Elementy tablicy"<<endl;
for(int i=0;i<n;i++)
{
	cout<<tab[i]<<"\t";
}
int max=tab[0];
for(int i=1;i<n;i++)
{
	if(tab[i]>max) max=tab[i];
}
cout<<endl<<"max="<<max<<endl;
for(int i=0;i<n;i++)
{
	if(tab[i]==max) x++;
}
cout<<endl<<"ile="<<x<<endl;





return 0;

}
