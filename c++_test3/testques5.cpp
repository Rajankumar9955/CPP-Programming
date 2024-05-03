#include<iostream>
using namespace std;
int main()
{   
    double a=1.1;
    float b=1.1f;
    try
    {
        throw a;
        throw b;
    }
    catch(double r)
    {
        cout<<"double:"<<r;
    }
    catch(float s)
    {
        cout<<"float:"<<s;
    }

}