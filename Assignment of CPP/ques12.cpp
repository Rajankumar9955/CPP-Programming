#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Month number:";
    cin>>n;
    if(n==1)
    {
        cout<<" jan:-31 days";
    }
    else if(n==2)
    {
        cout<<" feb:-28-29 days";
    }
    else if(n==3)
    {
        cout<<"mar:-30 days";
    }
    else if(n==4)
    {
        cout<<"apr:-31 days";
    }
    else if(n==5)
    {
        cout<<"may:-30 days";
    }
    else if(n==6)
    {
        cout<<"jun:-31 days";
    }
    else if(n==7)
    {
        cout<<"jul:-30 days";
    }
    else if(n==8)
    {
        cout<<"aug:-31 days";
    }
    else if(n==9)
    {
        cout<<"sep:-30 days";
    }
    else if(n==10)
    {
        cout<<"oct:-31 days";
    }
    else if(n==11)
    {
        cout<<"nov:-30 days";
    }
    else if(n==12)
    {
        cout<<"dec:-31 days";
    }
}
/*
output:-
Enter the Month number:2
 feb:-28-29 days
*/