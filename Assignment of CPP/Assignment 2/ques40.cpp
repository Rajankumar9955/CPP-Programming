#include<iostream>
using namespace std;
int main()
{
    int n,number=1;
    cout<<"enter the number of rows:";
    cin>>n;
    for(int i=1; i<=n; ++i)
    {
        for(int j=1; j<=i; ++j)
        {
            cout<<number<<" ";
            ++number;
        }
        cout<<"\n";
    }
}

/*
output:-
enter the number of rows:3
1 
2 3 
4 5 6 
*/