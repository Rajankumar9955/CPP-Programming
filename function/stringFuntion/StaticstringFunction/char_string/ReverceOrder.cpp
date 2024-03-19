#include<iostream>
using namespace std;
#include<cstring>
int main()
{
    char c[10];
    int n;
    cout<<"enter ur name\n";
    cin>>c;
    n=strlen(c);
    for(int i=n-1; i>=0; --i)
    {
        cout<<c[i];
    }
}
