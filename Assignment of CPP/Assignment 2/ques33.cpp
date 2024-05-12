#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,bit;
    int ans=0;
    int i=0;
    cout<<"enter binary number:";
    cin>>n;
    while(n!=0)
    {
        bit=n%10;
        if(bit==1)
        {
            ans=bit * pow(2,i) + ans;
        }
        n=n/10;
        i++;
    }
    cout<<ans;
}

/*
output:-
enter binary number:0100
4
*/