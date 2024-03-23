#include<iostream>
using namespace std;
void fact(int n)
{
    if(n==0 || n==1)
    {
        return n;
    }
    int t=n*fact(n-1);
    return t;
}
int main()
{
    int n;
    cout<<"enter the number:";
    cin>>n;
    cout<<"factorial="<<fact(n);
}