#include<iostream>
using namespace std;
int main()
{
    int a,i;
    cout<<"enter the first number:";
    cin>>a;
    // cout<<"enter the second number:";
    // cin>>b;
    for( i=1; i<=a; ++i)
    {
        if(a%i==0)
       cout<<i<<"\t";
    }
}
/*
output:-
enter the first number:60
1       2       3       4       5       6       10      12      15      20       30      60
*/
