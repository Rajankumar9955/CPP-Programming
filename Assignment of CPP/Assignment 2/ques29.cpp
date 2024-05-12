#include<iostream>
using namespace std;
int main()
{
    int num,temp,rem,sum=0;
    cout<<"enter the number:";
    cin>>num;
    temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum+rem*rem*rem;
        temp=temp/10;
    }
    if(sum==num)
    {
        cout<<num<<" 37This is armstrong number";
    }
    else
    {
        cout<<num<<" This is no armstrong number";
    }
}
/*
output:-
enter the number:371
371 This is armstrong number
*/