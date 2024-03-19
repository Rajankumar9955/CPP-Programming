#include<iostream>
#include<cstring>
using namespace std;
int main()
{  
    //=========================upper to lower=================
    char c[10];
    int len;
    cout<<"enter ur name\n";
    cin>>c;
    len=strlen(c);
    for(int i=0; i<len; ++i)
    {
        c[i]=c[i]+32;
    }
    cout<<c;

// ==========================lower to upper========================
    char c[10];
    int len;
    cout<<"enter ur name\n";
    cin>>c;
    len=strlen(c);
    for(int i=0; i<len; ++i)
    {
        c[i]=c[i]-32;
    }
    cout<<c;
}