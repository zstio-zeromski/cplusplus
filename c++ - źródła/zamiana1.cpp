#include <iostream>
using namespace std;

void zamiana(int &a, int &b, int &c)
{
	int pom, pom1;
	if((a>b)&&(b>c))
	{
		pom=a;
		a=c;//min
		c=pom;//max
	}
	else
	{
		if((b>a)&&(a>c))
		{
			pom=a;
			a=c;
			pom1=b;
			b=pom;
			c=pom1;
		}
	}
}
int main()
{
	int d=4, e=3, f=2;
	zamiana(d,e,f);
	cout<<d<<" "<<e<<" "<<f<<endl;
	return 0;
}
