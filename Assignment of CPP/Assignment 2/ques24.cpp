#include<iostream>
using namespace std;
int main()
{
    int n1,n2,high;
    cout<<"enter the two number:";
    cin>>n1>>n2;
    if(n1>n2)
    {
        int temp=n1;
        n1=n2;
        n2=temp;
    }
    for(int i=1; i<=n2; ++i)
    {
        if(n1%i==0 && n2%i==0)
        {
            high=i;
        }
    }
    cout<<"HCF:"<<high;
}

/*
enter the two number:20
30
HCF:10
*/