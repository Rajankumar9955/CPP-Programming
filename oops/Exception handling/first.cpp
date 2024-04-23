#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter the 2 number\n";
    cin>>a>>b;
    try
    {
        if(b==0)
        {
            throw b;
        }
        cout<<a/b<<"\n";
    }
    catch(int r)
    {
       cout<<"denominator should not be zero\n";
    }
    cout<<"ok\n";
}
