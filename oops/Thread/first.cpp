// #include<iostream>
// #include<thread>
// using namespace std;
// void even(int a)
// {
//     for(a;a>=1;--a)
//     {
//         if(a%2==0)
//         {
//             cout<<"even no="<<a<<"\t";
//         }
//     }
// }
// void odd(int b)
// {
//     for(b;b>=1;--b)
//     {
//         if(b%2!=0)
//         {
//             cout<<"odd number="<<"\t";
//         }
//     }
// }
// int main()
// {
//     even(10);
//     odd(20);
// }

#include<iostream>
using namespace std;
void even(int a)
{
    for(a;a>=1;a--)
    {
        if(a%2==0)
        {
            cout<<"even number="<<a<<"\n";
        }
    }
}
void odd(int b)
{
    for(b;b>=1;--b)
    {
        if(b%2!=0)
        cout<<"odd number="<<b<<"\n";
    }
}
int main()
{
    even(15);
    cout<<"bye"<<"\n";
    odd(10);
}