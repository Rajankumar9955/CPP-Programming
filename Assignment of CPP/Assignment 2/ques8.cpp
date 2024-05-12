#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout<<"enter the N number:";
    cin>>n;
    for(i=0; i<=n; ++i)
    {
        if(i%2!=0)
        {
            sum=sum+i;
        }
    }
  cout<<"sum of N number:"<<sum;
}

/*
output:- 
enter the N number:10
sum of N number:25
*/