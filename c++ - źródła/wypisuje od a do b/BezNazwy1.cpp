#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cin>>a;
	cin>>b;
	if(a>b) 
	{		
		for (; a>=b; a--)
		{
	 		cout <<a<<endl;	 	 
		}
	}	
	else 
	{	
		for (; b>=a; a++)
	 	{
	 		cout <<a<<endl;
		}
	
	}
	 return 0;
		
}
