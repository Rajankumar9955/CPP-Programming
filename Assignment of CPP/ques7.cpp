#include<iostream>
using namespace std;
int main()
{
    char n;
    cout<<"enter anything to check the char or not:";
    cin>>n;
    if((n>='a' && n<='z') || (n>='A'&& n<='Z'))
    {
        cout<<" this is char";
    }
    else
    {
        cout<<"this is not charactor";
    }
}
/*
output:-
enter anything to check the char or not:r
 this is char
*/