#include <iostream>

using namespace std;

int main()
{
	int n;
	cout<<"podaj n"<<endl;
	cin>>n;
	
	int s=1, k=2;
	while(k<=(n/2))
	{
		if(n%k==0)
		{
			s=s+k;
		}
		k=k+1;
	}
	if(s==n)
	{
		cout<<"TAK"<<endl;
	}
	else
	{
		cout<<"NIE"<<endl;	
	}
	
	return 0;
}
