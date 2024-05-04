// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={23,56,75,89,45,21,658,75};
//     int r=sizeof(arr)/sizeof(arr[0]);
//     int i;
//     cout<<"enter the array position\n";
//     cin>>i;
//     try
//     {
//         if(i>r-1)
//         {
//             throw i;
//         }
//         cout<<arr[i]<<"\n";
//     }
//     catch(int r)
//     {
//         cout<<"This position doesn't exist in the array\n";
//     }
//     cout<<"ok\n";
// }








#include<iostream>
using namespace std;
int main()
{
    int arr[]={125,1245,856,575,86,952,3567,5469,5213,5468,4568,75648,9567};
    int s,v;
    s=sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter the array position:";
    cin>>v;
    try
    {
        if(v>s-1)
        {
            throw v;
        }
        cout<<"Value of that positon:"<<arr[v];
    }
    catch(int v)
    {
        cout<<"This position is not exits in the array";
    }
}