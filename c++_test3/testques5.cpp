#include<iostream>
using namespace std;
int main()
{
    try
    {
        throw 1.1;
        throw 1.2f;
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