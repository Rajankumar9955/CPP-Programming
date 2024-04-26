#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter the 4 digit number\n";
    cin>>a;
    if(a<10000 & a>999)
    {
        int start,end;
        start=a/1000;
        end=a%1000%100%10;
        cout<<"first number="<<start<<"\n"<<"end number="<<end<<"\n"<<"sum="<<start+end<<"\n";
    }
    else{
        cout<<"please enter 4 digit number\n";
    }
}