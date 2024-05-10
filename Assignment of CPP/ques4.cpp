#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter the number:";
    cin>>num;
    if(num%5==0 && num%11==0)
    {
        cout<<num<<" "<<"This is divisible by 5 or 11";
    }
    else
    {
        cout<<"this is not divisible by 5 or 11";
    }
}

/*
output:- 
enter the number:110
110 This is divisible by 5 or 11
*/