#include<iostream>
using namespace std;
int main()
{
    int num,i,j,prime=1,x;
    cout<<"enter the number to find the prime factor=";
    cin>>num;
    for(i=2; i<=num; ++i)
    {
      if(num%i == 0)
      {
       for(j==2; j<=i/2; ++j)
       {
        x=i%j;
        if(i%j==0)
        {
          prime=0;
          break;
        }
       }
       if(prime == 1)
       {
        cout<<i<<" is a prime factor\n";
       }
      }
    }
}

/*
output:-
enter the number to find the prime factor=27
3 is a prime factor
9 is a prime factor
27 is a prime facto
*/