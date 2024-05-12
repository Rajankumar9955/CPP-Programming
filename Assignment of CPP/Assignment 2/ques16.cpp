#include<iostream>
using namespace std;
int main()
{
    int n,reverse=0,rem;
    cout<<"enter the number:";
    cin>>n;
    while(n!=0)
    {
        rem=n%10;
        reverse=reverse * 10 + rem;
        n=n/10;
    }
    cout<<"Reverse number:"<<reverse;
}

/*
output:-
enter the number:1234
Reverse number:4321
*/