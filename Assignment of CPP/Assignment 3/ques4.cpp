#include<iostream>
using namespace std;
int main()
{
    int n,a[100],s,l;
    cout<<"enter the number of array:";
    cin>>n;
    cout<<"enter the element of an array:";
    for(int i=0; i<n; ++i)
    {
        cin>>a[i];
    }
    if(a[0]<a[1])
    {
        l=a[0];
        s=a[1];
    }
    else{
        l=a[1];
        s=a[0];
    }
    for(int i=0; i<n; ++i)
    {
        if(a[i]>l)
        {
            s=l;
            l=a[i];
        }
        else if(a[i]>s && a[i!=l])
        {
            s=a[i];
        }
    }
    cout<<"second largest element of an array:"<<s;
}

/*
output:-
enter the number of array:5
enter the element of an array:154
356
325
36
585
second largest element of an array:356
*/