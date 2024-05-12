#include<iostream>
using namespace std;
int main()
{
    int num,first,last;
    cout<<"enter the number:";
    cin>>num;
    last=num%10;
    first=num;
    while(first>=10)
    {
        first=first/10;
    }
    cout<<"first number:"<<first<<"\t";
    cout<<"\nlast number:"<<last<<"\t";
}

/*
output:-
enter the number:1325
first number:1
last number:5
*/