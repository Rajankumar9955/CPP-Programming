#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    int bit;
    int ans=0;
    int i=0;
    cout<<"enter the the decimal number:";
    cin>>n;
    while(n!=0)
    {
        bit=n&1;
        ans=bit*pow(10,i)+ans;
        n=n>>1;
        i++;
    }
    cout<<ans;
}
/*
output:-
enter the the decimal number:3
11
*/