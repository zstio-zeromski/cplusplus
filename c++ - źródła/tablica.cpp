#include <iostream>

using namespace std;
void funkcja(double tab1[][3])
{
     for(int i=0; i<2;++i)
             for(int j=0; j<3; j++)
             {
                     tab1[i][j] = i+j;        
             }     
}
int main()
{
    double tab[][3] = {1,2,3,4,5,6};
    double *a;
    a = &(tab[0][0]);
    
    int tab1[] = {1,2,3,4};
    int *b;
    b = tab1;
   
    for(int i=0; i<2;++i)
             for(int j=0; j<3; j++)
             {
                     cout<<"[ "<<i<<" ]"<<" [ "<<j<<" ] = "<<*(a++)<<endl;
             }
    cout<<endl;
    
     funkcja(tab);
     for(int i=0; i<2;++i)
             for(int j=0; j<3; j++)
             {
                     cout<<"[ "<<i<<" ]"<<" [ "<<j<<" ] = "<<*(tab+i+j)<<endl;
             }
    system("PAUSE");
    return 0;   
}
