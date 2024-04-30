#include<iostream>
using namespace std;
int main()
{
    int counts=0;
    int a;
    cout<<"enter binary number:";
    cin>>a;
    while(a!=0)
    {
        if(a&1)
        {
            counts++;
        }
        a=a>>1;
    }
    cout<<counts;
    
}