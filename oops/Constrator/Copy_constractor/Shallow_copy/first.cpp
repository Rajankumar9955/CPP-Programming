// #include<iostream>
// using namespace std;
// class top
// {
//     int a,b;
//    public:top(int x, int y)
//     {
//         a=x;
//         b=y;
//     }
//     top()
//     {
//       a=90;
//     }
//     void show()
//     {
//         cout<<"value of a="<<a<<"\n";
//         cout<<"value of b="<<b<<"\n";
//     }
//     void display()
//     {
//         cout<<a;
//     }
// };
// int main()
// {
//     top t(2,3);
//     top t2=t;
//     t2.show();
//     top z1;
//     top z2;
//     z2=z1;
//     z2.display();

// }

#include<iostream>
using namespace std;
class top
{
    int a,b;
    public:top(int x,int y)
    {
        a=x;
        b=y;
    }
    top()
    {
        a=912;
    }
    void show()
    {
        cout<<"value of a="<<a<<"\n";
        cout<<"value of b="<<b<<"\n";
    }
    void display()
    {
        cout<<a;
    }
};
int main()
{
    int a,b;
    cout<<"Enter the first number:";
    cin>>a;
    cout<<"Enter the second number:";
    cin>>b;
    top t(a,b);
    top t1=t;
    t1.show();
    top z;
    top z1;
    z=z1;
    z1.display();
}