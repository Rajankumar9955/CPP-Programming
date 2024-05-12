#include<iostream>
using namespace std;
int main()
{
    char num;
    cout<<"enter the anything:";
    cin>>num;
    if((num>='a' && num<='z') || (num>='A' && num<='Z'))
    {
        cout<<"this is character\n";
    }
    else if(num>='0' && num<= '9')
    {
        cout<<"This is Digit\n";
    }
    else
    {
        cout<<"This is special character\n";
    }
}
/*
output:- 
enter the anything:@
This is special character
*/