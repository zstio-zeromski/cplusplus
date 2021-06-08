#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
float b;
float c;
float suma;	
float roznica;
float iloczyn;
float iloraz;
float zaokraglij(float iloraz)  {
    return round(iloraz*100)/100;
}

int main(int argc, char** argv) {

	cout<<"podaj a"<<endl;
	cin>>c;
	cout<<"podaj b"<<endl;
	cin>>b;
	suma=c+b;
	cout<<"suma="<<suma<<endl;
	roznica=c-b;
	cout<<"roznica="<<roznica<<endl;
	iloczyn=c*b;
	cout<<"iloczyn="<<iloczyn<<endl;
	iloraz=c/b;
	cout<<"iloraz="<<iloraz<<endl;
	cout << "Liczba po zaokragleniu=" << zaokraglij(iloraz) << endl;
	return 0;
}
