#include<iostream>
using namespace std;
int fib(int f)
{
    if(f==0)
    {
        return 0;
    }
    if(f==1)
    {
        return 1;
    }
    int ans = fib (f-1)+fib(f-2);
    return ans;
}
int main()
{
    int n;
    cout<<"enter fibonacci term:";
    cin>>n;
    cout<<fib(n);
}