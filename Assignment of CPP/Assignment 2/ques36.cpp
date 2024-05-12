#include<iostream>
using namespace std;
int main()
{
    int pow;
    int base,result=1;
    cout<<"Enter the base:";
    cin>>base;
    cout<<"Enter the power:";
    cin>>pow;
    while(pow!=0)
    {
        result=result*base;
        --pow;
    }
    cout<<result;
}

/*
output:-
Enter the base:2
Enter the power:3
8
*/