#include<iostream>
using namespace std;
int main()
{
    int n,m,mul=1;
    cout<<"enter the number:";
    cin>>n;
    while(n>0)
    {
        m=n%10;
        mul=mul*(n%10);
        n=n/10;
    }
    cout<<"product of that number:"<<mul;
}

/*
output:-
enter the number:1234
product of that number:24
*/