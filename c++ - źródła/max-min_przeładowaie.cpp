#include <iostream>
using namespace std;

float max1(float a, float b, float c)
{
	if((a>b)&&(b>c))
		return a;
	else
	{
		if((b>a)&&(b>c))
			return b;
		else 
			return c;
	}
}
float max1(float a, float b)
{
	if(a>b)
		return a;		
	else 
		return b;
}
float min1(float a, float b, float c)
{
	if((a<b)&&(b<c))
		return a;
	else
	{
		if((b<a)&&(b<c))
			return b;
		else 
			return c;
	}
}
float min1(float a, float b)
{
	if(a<b)
		return a;		
	else 
		return b;
}
int main()
{
	cout<<"max1:"<<max1(1,2,3)<<endl;
	cout<<"max2:"<<max1(1,2)<<endl;
	cout<<"min1:"<<min1(1,2,3)<<endl;
	cout<<"min2:"<<min1(1,2)<<endl;
	return 0;
}
