#include<iostream>
using namespace std;
int main()
{
     int a[5];
    int k=sizeof(a)/sizeof(a[0]);
    cout<<"enter values\n";
    for(int i=0; i<k; ++i)
    {
        cin>>a[i];
    }
    cout<<"\n stored data\n";
    for(int i=0; i<k; ++i)
    {

            cout<<a[i]*a[i]<<"\t";
        
    }
}

