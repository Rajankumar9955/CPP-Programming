#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of the array:";
    cin>>n;
    int arr[n],i,pos;
    cout<<"enter the "<<n<<" elements of the array:\n";
    for(i=0; i<n;++i)
    {
        cin>>arr[i];
    }
    cout<<"\n\n"<<n<<" elments of the array,before deletion are:\n\n";
    for(i=0; i<n; ++i)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n\n enter the position,betweeen 1 to "<<n<<" of the element to be delete :";
    cin>>pos;
    --pos;
    for(i=0; i<=n-1; ++i)
    {
        arr[i]=arr[i+1];
    }
    
    cout<<"\n\n the "<<n-1<<"elements of the array, after deletion are:\n\n";
    for(i=0; i<n-1; ++i)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n\n";
}

/*
output:-
enter the size of the array:5
enter the 5 elements of the array:
1
2
3
4
5


5 elments of the array,before deletion are:

1 2 3 4 5

 enter the position,betweeen 1 to 5 of the element to be delete :1


 the 4elements of the array, after deletion are:

2 3 4 5

*/