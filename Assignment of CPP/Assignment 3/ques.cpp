#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,6,52,52,6,85,85,15,32,21};
    int s=sizeof(arr)/sizeof(arr[0]);
    cout<<"original arry:";
    for(int i=0; i<s; ++i)
    
        cout<<arr[i]<<" ";
    
    cout<<"\nUnique elements of the said array:";
    for(int i=0; i<s; ++i)
    {
        int j;
        for(j=0; j<i; ++j)
        {
            if(arr[i]==arr[j])
            break;
        }
        if(i==j)
    
            cout<<arr[i]<<" ";
        
    }
    
}

/*
output:-
original arry:1 2 6 52 52 6 85 85 15 32 21 
Unique elements of the said array:1 2 6 52 85 15 32 21 
*/