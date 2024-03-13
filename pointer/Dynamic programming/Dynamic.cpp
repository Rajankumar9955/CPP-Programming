#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter size of array\n";
    cin>>n;
    int *p=new int [n];
    int a[5]={1,23,12,42,2};
    for(int i=0; i<n; ++i)
    {
        cin>>p[i];
    }
    cout<<"stored values in Heap\n";
    for(int i=0; i<n;++i)
    {
        cout<<p[i]<<"\n";

    }
    delete []p;
    cout<<"garbage value of\n";
    for(int i=0; i<n;++i)
    {
        cout<<p[i]<<"\n";
    }
    p=NULL;//a;
    cout<<"new memory of pointer\n";
    for(int i=0; i<5; ++i)
    {
        cout<<p[i]<<"\n";
    }
}


