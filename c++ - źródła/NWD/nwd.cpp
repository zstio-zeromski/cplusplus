#include<iostream>
using namespace std;
int a;
int b;
int main()
{
	cout<<"Podaj pierwsza liczbe:"<<endl;
	cin>>a;
	cout<<"Podaj drug¹ liczbe:"<<endl;
	cin>>b;
	do
	{
       if(a>b)
      	{
 		a=a-b;
 		}
	 	else
	 	{
 		b=b-a;
 		}
 	}
 	while(a!=b);
	cout<<"NWD="<<a<<endl;
return 0;
 }
