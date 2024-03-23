#include<iostream>
using namespace std;
int main()
{
    char a[]={56,45,23,56,75};
    int t,n;
    n=sizeof(a)/sizeof(a[0]);
    t = a[0];
    for(int j=0; j<n; ++j)
        {
            if(t<a[j])
            {
                t=a[j];
            }
        }
    
    cout<<"greater number is:"<<t<<"\n";
}