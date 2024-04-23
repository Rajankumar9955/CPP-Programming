#include<iostream>
using namespace std;
int main()
{
    int arr[]={23,56,75,89,45,21,658,75};
    int r=sizeof(arr)/sizeof(arr[0]);
    int i;
    cout<<"enter the array potion\n";
    cin>>i;
    try
    {
        if(i>r-1)
        {
            throw i;
        }
        cout<<arr[i]<<"\n";
    }
    catch(int r)
    {
        cout<<"This position doesn't exist in the array\n";
    }
    cout<<"ok\n";
}