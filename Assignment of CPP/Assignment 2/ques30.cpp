#include<iostream>
using namespace std;
int main()
{
    int num,i,sum=0,div;
    cout<<"enter the number:";
    cin>>num;
    for(i=1; i<num; ++i)
    {
        div=num%i;
        if(div==0)
        {
            sum=sum+i;
        }
    }
    if(sum==num)
    {
        cout<<num<<" is perfect number:";
    }
    else
    {
        cout<<num<<" is not perfect number:";
    }
}

/*
output:-
enter the number:28
28 is perfect number:
*/