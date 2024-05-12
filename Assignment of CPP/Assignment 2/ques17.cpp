#include<iostream>
using namespace std;
int main()
{
    int n,num,digit,rev=0;
    cout<<"enter the number:";
    cin>>n;
    n=num;
    do
    {
        digit=num%10;
        rev=(rev*10)+digit;
        num=num/10;
    }while(num!=0);
    // cout<<"the reverse of the number:"<<rev<<"\n";
    if(n==rev)
    {
        cout<<"this is palindrome";
    }
    else
    {
        cout<<"this is not palindrome";
    }
}

/*
output:-
enter the number:12321
this is palindrome
*/