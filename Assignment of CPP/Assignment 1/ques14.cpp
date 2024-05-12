#include<iostream>
using namespace std;
int main()
{
    int a,b,c,sum;
    cout<<"enter the three angle of triangle:";
    cin>>a>>b>>c;
    sum=a+b+c;
    if(sum==180 && a!=0 && b!=0 && c!=0)
    {
        cout<<"The trianle is valid"<<"\n";
    }
    else 
    {
        cout<<"The triangle is not valid"<<"\n";
    }
}
/*
output:- 
enter the three angle of triangle:60
60
60 
The trianle is valid
*/