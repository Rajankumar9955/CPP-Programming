/*SHALLOW COPY HAVE TWO TYPE 
(1) IMPLICITLY ASSIGNMENT COPY CONSTRACTOR :- IT HAVING ASSINGMENT OPERATOR
(2) CALLING COPY CONSTRACTOR EXPLICITLY :- BUT ITS IS CALL DIRECTLY*/ 

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
    top t1=t;  //Implicity assignment copy constractor
    t1.show();
    top z;
    top z1; // calling copy constractor explicitly
    z=z1;
    z1.display(); 
}