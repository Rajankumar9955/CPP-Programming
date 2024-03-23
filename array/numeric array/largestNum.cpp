// WAP TO PRINT THE LARGEST NUMBER OF AN ARRAY

#include<iostream>
using namespace std;
int main()
{
 int a[5];
 cout<<"enter the number:";
 int s=sizeof(a)/sizeof(a[0]);
 int k=a[0];
 for(int i= 0; i<s; ++i)
 {
    cin>>a[i];
 }
 for(int i=0; i<s; ++i)
 {
    if(k < a[i])
    {
        k = a[i];
    }
 }
 cout<<"largest number is="<<k<<"\t";
}