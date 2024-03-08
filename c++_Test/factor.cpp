#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter first number:";
    cin>>a;
    cout<<"enter second number:";
    cin>>b;
    for(int i=1; i<a; i++)
    {
        if(a%i==0 && b%i==0)
        {
            cout<<i<<"\n";
        }
    }
}