#include<iostream>
using namespace std;
int main()
{
    int n,total=0;
    cout<<"enter the enter:";
    cin>>n;
    while(n>0)
    {
        total++;
        n=n/10;
    }
    cout<<"total number:"<<total;
}

/*
output:-
enter the enter:646413
total number:6
*/