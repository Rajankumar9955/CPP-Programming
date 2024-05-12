#include<iostream>
using namespace std;
int main()
{
    int base,exp,result=1;
    cout<<"enter the base number:";
    cin>>base;
    cout<<"enter the power:";
    cin>>exp;
    for(int i=1; i<=exp; ++i)
    {
        result=result*base;
    }
    cout<<"power:"<<result;
}

/*
output:-
enter the base number:2
enter the power:3
power:8
*/