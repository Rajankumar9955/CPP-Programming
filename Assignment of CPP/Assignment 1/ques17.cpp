#include<iostream>
using namespace std;
int main()
{
    int p,c;
    cout<<"enter the principle amount:";
    cin>>p;
    cout<<"enter the current amount:";
    cin>>c;
    if(p>c)
    {
      cout<<"You are in loss";
    }
    else if(p<c)
    {
        cout<<"You are in profit";
    }
    else
    {
        cout<<"No profit no loss";
    }
}

/*
output:-
enter the principle amount:500
enter the current amount:1000
You are in profit
*/