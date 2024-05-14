#include<iostream>
using namespace std;
int main()
{
    int n;
    int a[100];
    int negative=0;
    cout<<"enter the size of array:";
    cin>>n;
    cout<<"enter the element";
    for(int i=0; i<n; ++i)
    {
       cin>>a[i];
    }
    for(int i=0; i<n; ++i)
    {
        if(a[i]<0)
        {
            negative++;
        }
    }
    cout<<"negative of an array:"<<negative;
}

/*
output:-
enter the size of array:5
enter the element-32
25
-12
-35
25
negative of an array:3
*/