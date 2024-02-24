// WAP TO PRINT THE MINIMUM NUMBER OF AN ARRAY

#include<iostream>
using namespace std;
int main()
{
 int a[]={10,12,9,75,3};
 int s;
 s=a[0];
 for(int i=0;i<5; ++i)
 {
    if(s>a[i])
    {
        s=a[i];
    }
 }
 cout<<"minimum:"<<s;
}