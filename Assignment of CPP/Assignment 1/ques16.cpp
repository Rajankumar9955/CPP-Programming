#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the three sides of triangle:";
    cin>>a>>b>>c;
    if(a==b && b==c)
    {
        cout<<"this is equilateral triangle";

    }
    else if(a==b || b==c || c==a)
    {
        cout<<"this is isosceles triangle";
    }
    else
    {
      cout<<"this is scalene triangle trialgle";
    }
}
/*
output:-
enter the three sides of triangle:12
12
12
this is equilateral triangle
*/