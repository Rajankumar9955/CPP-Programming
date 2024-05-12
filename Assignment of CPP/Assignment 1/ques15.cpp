#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the three angle of triangle:";
    cin>>a>>b>>c;
    if(a+b+c==180)
    {
        cout<<"This is valid angle";
    }
    else
    {
        cout<<"This is not valid";
    }
}
/*
output:-
enter the three angle of triangle:60
60
60
This is valid angle
*/