#include<iostream>
using namespace std;
int main()
{
    int num, first,last,sum=0;
    cout<<"Enter the number:";
    cin>>num;
    last=num%10;
    first=num;
    while(first>=10)
    {
        first=first/10;
    }
    sum=first+last;
    cout<<"sum of first and last:"<<sum;
}

/*
output:-
Enter the number:1236
sum of first and last:7
*/