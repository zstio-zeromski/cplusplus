#include <iostream>

using namespace std;

int main()
{
	int r;
	int l;//iloœæ wydanego danego nomina³u
	cout<<"podaj resztê do wydania: "<<endl;
	cin>>r;
	
	int n[]={200,100,50,20,10,5,2,1};
	
	int i=0;
	while(r>0)
	{
		if(r>=n[i])
		{
			l=r/n[i];
			r=r-(n[i]*l);
			cout<<n[i]<<" ile: "<<l<<endl;
		}
		i=i+1;	
	}
	
	return 0;
}
