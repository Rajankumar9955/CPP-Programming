#include<iostream>
using namespace std;
int main()
{
    int num,first,last,temp;
    cout<<"enter the number:";
    cin>>num;
    last=num%10;
    first=num;
    while(first>=10)
    {
        first=first/10;
    }
    temp=first;
    first=last;
    last=temp;
    cout<<"after swapping first ans last element:"<<first<<"\t"<<last;
}

/*
output:-
enter the number:1365
after swapping first ans last element:5 1
*/