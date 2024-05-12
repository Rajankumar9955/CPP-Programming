#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number:";
    cin>>n;
    int r=n;
    int count=0;
    while(n>0)
    {
        n=n>>1<<1;
        if(r-n==1)
        {
            count++;
        }
        r=n>>1;
        n=r;
    }
    cout<<"numbers of 1st are:"<<count;
}

/*
enter the number:10
numbers of 1st are:2
*/