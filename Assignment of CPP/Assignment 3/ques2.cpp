#include<iostream>
using namespace std;
int main()
{
    int n,a[100],sum=0;
    cout<<"enter the number of array:";
    cin>>n;
    cout<<"enter the element:";
    for(int i=0; i<n; ++i)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; ++i)
    {
        sum=sum+a[i];
    }
    cout<<"sum of array:"<<sum;
}

/*
output:-
enter the element:1
2
3
4
5
sum of array:15
*/