#include<iostream>
using namespace std;
#include<thread>
void even(int a)
{
    for(a;a>=1;--a)
    {
        if(a%2==0)
        {
            cout<<"even no="<<a<<"\t";
        }
    }
}
void odd(int b)
{
    for(b;b>=1;--b)
    {
        if(b%2!=0)
        {
            cout<<"odd number="<<b<<"\t";
        }
    }
}
int main()
{
    thread r1(even,10);
    thread r2(odd,20);
    cout<<"\nby";
    r1.join();
    r2.join();
}

