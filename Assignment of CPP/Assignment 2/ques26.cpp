#include<iostream>
using namespace std;
int main()
{
    int n,i,m=0,flag=0;
    cout<<"enter the number:";
    cin>>n;
    if(n==1)
    {
        flag=1;
        cout<<"this is not prime number:";
    }
    for(i=2; i<n; ++i)
    {
        if(n%i==0)
        {
            cout<<"this is not prime number:";
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"this is prime number\n";
    }
    
}

/*
output:-
enter the number:5
this is prime number
*/