// #include<iostream>
// using namespace std;
// class top
// {
//     int a,b;
//     void sum()
//     {
//         cout<<"top class\n";
//     }
// public:friend void cybrom(top &t);

// };
// void cybrom(top &t)
// {
//     t.sum();
//     t.a=120;
//     t.b=80;
//     cout<<t.a+t.b;
// }
// int main()
// {
//     top t;
//     cybrom(t);
// }

#include<iostream>
using namespace std;
class top
{
    int a,b;
    void sum()
    {
        cout<<"Hello Baby\n";
        cout<<"How are you?\n";
    }
   public:friend void raj(top &t);
};
void raj(top &t)
{
    t.sum();
    t.a=120;
    t.b=100;
    cout<<"your first number is="<<t.a<<"\n"<<"your second number is="<<t.b<<"\n";
    cout<<"your sum is="<<t.a+t.b<<"\n";
    cout<<"your substraction is="<<t.a-t.b<<"\n";
    cout<<"your multiplication is="<<t.a*t.b<<"\n";
    cout<<"your division is="<<t.a/t.b<<"\n";
    }
int main()
{
     top t;
    // int r,s;
    // cout<<"Enter the first number:";
    // cin>>r;
    // cout<<"enter the second number:";
    // cin>>s;
    // t.sum(r,s);
    raj(t);

}