#include<iostream>
using namespace std;
int main()
{
    int n,arr[100],finalarr[100];
    cout<<"enter the size of an array:";
    cin>>n;
    cout<<"enter the element of an array:";
    for(int i=0; i<n; ++i)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n; ++i)
    {
        finalarr[i]=arr[i];
    }
    cout<<"final array is:\n";
    for(int i=0; i<n; ++i)
    {
        cout<<finalarr[i]<<" ";
    }
}
/*
output:-
enter the size of an array:5
enter the element of an array:1
2
3
4
5
final array is:
1 2 3 4 5 
*/