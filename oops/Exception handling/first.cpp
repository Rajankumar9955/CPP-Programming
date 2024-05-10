// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b;
//     cout<<"enter the 2 number\n";
//     cin>>a>>b;
//     try
//     {
//         if(b==0)
//         {
//             throw b;
//         }
//         cout<<a/b<<"\n";
//     }
//     catch(int r)
//     {
//        cout<<"denominator should not be zero\n";
//     }
//     cout<<"ok\n";
// }




#include<iostream>
#include<thread>
using namespace std;
void even(int n)
{
    for(n; n>=1; --n)
    {
        if(n%2==0)
        {
            cout<<"This is even number:"<<n<<"\n";
        }
    }
}
void odd(int s)
{
    for(s; s>=1; --s)
    {
        if(s%2!=0)
        {
            cout<<"This is odd number:"<<s<<"\n";
        }
    }
}
int main()
{
    thread r(even,15);
    thread r1(odd,10);
    r.join();
    r1.join();
}