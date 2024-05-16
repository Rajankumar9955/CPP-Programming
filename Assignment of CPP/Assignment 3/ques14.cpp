#include<iostream>
using namespace std;
int main()
{
    int arr[10],even[10],odd[10],evn=0,od=0,i,n;
    cout<<"enter the number for array:";
    cin>>n;
    cout<<"enter number in the array:";
    for(i=0; i<n; ++i)
    {
        cin>>arr[i];
    }
    for(i=0; i<n; ++i)
    {
        if(arr[i]%2==0)
        {
            even[evn++]=arr[i];
        }
        else
        {
            odd[od++]=arr[i];
        }
    }
    cout<<"The even numbers are :";
    for(i=0; i<evn;++i)
    {
        cout<<even[i]<<" ";
    }
    cout<<"\nThe odd numbers are: ";
    for(i=0; i<od; ++i)
    {
        cout<<odd[i]<<" ";
    }
}

/*
output:-
enter the number for array:5
enter number in the array:10
23
10
02
25
The even numbers are :10 10 2 
The odd numbers are: 23 25 
*/