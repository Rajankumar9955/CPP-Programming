#include<iostream>
using namespace std;
int main()
{
    // int arr[5]={10,5,2,6,3};
    // int *P=arr;
    // cout<<P<<"\n";
    // cout<<arr<<"\n";
    // cout<<arr[0];

    int a=90;
    cout<<"value of a="<<a<<endl;
    cout<<"address of a="<<&a<<endl;
    int *ptr=&a;
    cout<<"address of ptr="<<&ptr<<endl;
    cout<<"address of a="<<ptr<<endl;
    cout<<"valur of a="<<*ptr<<endl;
    int **ptr2=&ptr;
    cout<<"address of ptr2="<<&ptr2<<endl;
    cout<<"address of ptr="<<ptr2<<endl;
    cout<<"value of ptr that holds the address of ptr="<<*ptr<<endl;
    cout<<"value of a="<<**ptr2<<endl;
    **ptr2=**ptr2+1;
    cout<<"value of updated valur of a="<<**ptr2<<endl;









}


