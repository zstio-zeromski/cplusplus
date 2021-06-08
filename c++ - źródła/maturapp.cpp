#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s = "motor";
    string w;
    char c;
    int r = s.size();
    cout<<r<<endl;
    for(int i = 0; i<r-1;i=i+2)
    {
           w[i] = s[i+1];
           w[i+1] = s[i];
            }
            w[4]=s[4];
            
            cout<<w[0]<<w[1]<<w[2]<<w[3]<<w[4]<<endl;
            cout<<s[0]<<s[1]<<s[2]<<s[3]<<s[4]<<endl;
    system("PAUSE");
    return 0;   
}
