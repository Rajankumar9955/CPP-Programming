#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char c[10];
    int n;
    cout<<"enter ur name\n";
    cin>>c;
    n=strlen(c);
    for(int i=0; i<n; ++i)
    {
        if(c[i]>=65 && c[i]<=90)
        {
            c[i]=c[i]+32;
        }
        else if(c[i]>=97 && c[i]<=122)
        {
            c[i]=c[i]-32;
    }
    }
    cout<<c;
    
}