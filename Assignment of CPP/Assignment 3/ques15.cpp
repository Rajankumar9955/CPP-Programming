#include<iostream>
using namespace std;
int main()
{
    int a[100],n,i,x;
    cout<<"enter the number of array: ";
    cin>>n;
    for(i=0; i<n; ++i)
    {
        cout<<"\nEnter the the elements: ";
        cin>>a[i];
    }
    cout<<"\nEnter the value to search: ";
    cin>>x;
    for(i=0; i<n; ++i)
    {
        if(a[i]==x)
        {
            cout<<"value found : "<<i;
        }
    }
    cout<<"\nvalue not found";

}

/*
output:-
enter the number of array: 5

Enter the the elements: 1

Enter the the elements: 2

Enter the the elements: 3

Enter the the elements: 4

Enter the the elements: 5

Enter the value to search: 2
value found : 1
*/