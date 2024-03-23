// WAP to swap two number using refrence variable

#include<iostream>
using namespace std;
void swap(int &r, int &n)
{
     int temp;
     temp=r;
     r=n;
     n=temp;
     cout<<"after swapping"<<"\n";
     cout<<"first number is:"<<r<<"\n";
     cout<<"second number is:"<<n;
}
int main()
{
    int r,n;
    cout<<"enter the first number:";
    cin>>r;
    cout<<"enter the second number:";
    cin>>n;
    swap(r,n);

}