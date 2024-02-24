#include<iostream>
using namespace std;
int main()
{
    int a[]={5,8,8,7,26,75};
    int k=sizeof(a)/sizeof(a[0]);
    cout<<"sum of values\n";
    // for(int i=0; i<k; ++i)
    // {
    //     cin>>a[i];
    // }
    // cout<<"\n stored data\n";
    int sum = 0;
    for(int i=0; i<k; ++i)
    {
          sum = sum+a[i];
        
    }
    cout<<sum;
}

