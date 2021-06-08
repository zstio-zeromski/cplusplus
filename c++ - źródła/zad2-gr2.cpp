#include <iostream>
using namespace std;

int main()
{
	int i=1,j=2,s=0;
	do
	{
		s=s+j;
		j=j+2;
		i=i+1;
	}
	while(i<=30);
	cout<<s;
	
	return 0;
	
}
