#include<iostream>
using namespace std;
int main()
{
    float a=1.1f;
    double b=1.1;
    try
    {
        // throw  a;
        throw b;
    }
    catch(float f)
    {
        cout<<"Float number:"<<f<<"\n";
    }
    catch(const double& d)
    {
        cout<<"Double Number:"<<d<<"\n";
    }
}