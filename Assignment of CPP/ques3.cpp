#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the any number:";
    cin>>n;
    if(n>0)
    {
        cout<<"positive value\n";
    }
    else if(n<0)
    {
        cout<<"negatice value\n";
    }
    else{
        cout<<"this is zero number";
    }
}

/*
output:=
enter the any number:1
positive value
*/