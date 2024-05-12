#include<iostream>
using namespace std;
int main()
{
    int n;
    int i;
    int sum=0;
    cout<<"enter the n number:";
    cin>>n;
   for(i=1; i<=n; ++i)
    {
        if(i%2==0)
        {
            sum=sum+i;
        }
    }
    cout<<"sum of n even number:"<<sum;
}

/*
output:-
enter the n number:10
sum of n even number:30
*/