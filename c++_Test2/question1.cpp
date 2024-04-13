#include<iostream>
using namespace std;
int main()
{
    // char a[]={56,45,23,56,75};
    // int t,n;
    // n=sizeof(a)/sizeof(a[0]);
    // t = a[0];
    // for(int j=0; j<n; ++j)
    //     {
    //         if(t<a[j])
    //         {
    //             t=a[j];
    //         }
    //     }
    
    // cout<<"greater number is:"<<t<<"\n";


    char a[]={56,58,96,35,75,56,58};
    int t,n;
    n=sizeof(a)/sizeof(a[0]);
    t=a[0];
    for(int i=0; i<n; ++i)
    {
        if(t<a[i])
        {
            t=a[i];
        }
    }
    cout<<"Greater number is:"<<t<<"\n";
}