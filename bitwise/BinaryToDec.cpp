// Binary to decimal

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    int bit;
    int ans=0;
    int i=0;
    cout<<"Enter the number\n";
    cin>>n; //5
    while(n!=0)
    {
        bit=n%10;
        if(bit==1)
        {
            ans=bit*pow(2,i)+ans;
        }
        n=n/10;
        i++;
    }
    cout<<ans;
}

