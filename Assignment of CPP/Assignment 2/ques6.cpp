#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"enter the N natural number:";
    cin>>n;
    for(int i=0; i<=n; ++i)
    {
        sum=sum+i;
        
    }
    cout<<"sum of N Natural number:"<<sum;
}
/*
output:-
enter the N natural number:50
sum of N Natural number:1275
*/