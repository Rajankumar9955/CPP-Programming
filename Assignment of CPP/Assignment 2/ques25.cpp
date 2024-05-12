#include<iostream>
using namespace std;
int main()
{
    int n1,n2,lcm,i;
    cout<<"enter the first number:";
    cin>>n1;
    cout<<"enter the second number:";
    cin>>n2;
    int max=(n1>n2)? n1 : n2;
    for(i=max; i<=n1*n2; ++i)
    {
        if(i%n1==0 && i%n2==0)
        {
            lcm=i;   
            break;
        }
    }
  cout<<"lcm of "<<n1<<" and "<<n2<<": "<<lcm<<"\t";
}

/*
enter the first number:10
enter the second number:20
lcm of 10 and 20: 20
*/