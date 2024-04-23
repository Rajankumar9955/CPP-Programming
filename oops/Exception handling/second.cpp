#include<iostream>
using namespace std;
int main()
{
    
    int array [] = {1,2,3,4,5};
    int  b = sizeof(array)/sizeof(array[0]);
    int i;
    cout<<"enter index\n";
    cin>>i;
    try
    {
        if(i>b-1)
        {
            throw i;
        }
        cout<<array[i]<<"\n";
    }
    catch (int e)
    {
        cout<<"out of bound\n";
    }
    cout<<"ok\n";

}