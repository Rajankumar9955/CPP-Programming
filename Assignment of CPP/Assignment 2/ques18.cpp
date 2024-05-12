#include<iostream>
using namespace std;
int main()
{
    int i,n,d,sum=0;
    cout<<"enter the number";
    cin>>n;
    for(i=1; i<n; ++i)
    {
      d=n%i;
      if(d==0)
      {
        sum=sum+i;
      }
    }
    if(sum == n)
    {
        cout<<"this is perfect number:";
    }
    else
    {
        cout<<"this is not perfect number:";
    }
}

/*
output:-
enter the number28
this is perfect number:
*/