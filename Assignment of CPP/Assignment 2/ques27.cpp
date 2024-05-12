#include<iostream>
using namespace std;
int main()
{
    int n,i,c,sum=0;
    cout<<"enter the number:";
    cin>>n;
    for(c=2; c<=n; ++c)
    {
    for(i=2; i<=(c/2); ++i)
    {
        if(c%i==0)
        {
            i=c;
            break;
        }
      }
      if(i!=c)
      {
        sum=sum+i;
      }
     }
     cout<<"sum of prime number:"<<sum;
    
}

/*
output:
enter the number:11
sum of prime number:15
*/