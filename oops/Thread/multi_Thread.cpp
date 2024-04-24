#include<iostream>
#include<thread>
using namespace std;
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
            cout<<"odd number="<<"\t";
        }
    }
}
int main()
{
    thread r(even,10);
    thread r1(odd,20);
    r1.join();
    r.join();
}