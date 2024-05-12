#include<iostream>
using namespace std;
int main()
{
    int n,t1=0,t2=1,nterm=0;
    cout<<"enter the number:";
    cin>>n;
    for(int i=1; i<=n; ++i)
    {
        if( i == 1)
        {
            cout<<t1<<" ";
            continue;
        }
        if(i==2)
        {
            cout<<t2<<" ";
            continue;
        }
        nterm=t1+t2;
        t1=t2;
        t2=nterm;
        cout<<nterm<<" ";
    }
}

/*
output:-
enter the number:10
0 1 1 2 3 5 8 13 21 34 
*/