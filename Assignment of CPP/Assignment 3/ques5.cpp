#include<iostream>
using namespace std;
int main()
{
    int n,arr[100],even=0,odd=0,total=0;
    cout<<"enter the number of an array:";
    cin>>n;
    cout<<"enter the element of an array:";
    for(int i=0; i<n; ++i)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n; ++i)
    {
        if(arr[i]%2==0 )
        {
           even=even+arr[i];
        }
        else if(arr[i]%2!=0)
        {
           odd=odd+arr[i];
        }
        total=even+odd;
    }
    cout<<"sum of odd and even:"<<total;
}
/*
output:-
enter the number of an array:5
enter the element of an array:1
32
36
2
35
sum of odd and even:106

*/