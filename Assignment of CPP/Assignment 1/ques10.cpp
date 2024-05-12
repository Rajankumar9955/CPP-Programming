#include<iostream>
using namespace std;
int main()
{
    char n;
    cout<<"enter the number:";
    cin>>n;
    if(n>='A' && n<='Z')
    {
        cout<<n<<" "<<"This is upper case";
    }
    else if(n>='a' && n<='z')
    {
        cout<<n<<" "<<"this is lower case";
    }
}
/*
output:-
enter the number:A
A This is upper case
*/