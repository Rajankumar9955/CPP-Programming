// #include<iostream>
// using namespace std;
// class RBI
// {
//     public: virtual void loan()=0;
//     void msg()
//     {
//             cout<<"welcome to RBI";
//     }
// };
// class SBI : public RBI
// {
//     public:void loan()
//     {
//         cout<<"SBI 8.5%\n";
//     }
// };
// class AXIS : public RBI
// {
//     public:void loan()
//     {
//         cout<<"AXIS 9.5%";
//     }
// };
// int main()
// {
//     RBI *s;
//     SBI sb;
//     s=&sb;
//     s->loan();
//     AXIS a;
//     s=&a;
//     s->loan();
// }

#include<iostream>
using namespace std;
class RBI
{
    public: virtual void loan()=0;
    void msg()
    {
        cout<<"welcome to the rbi\n";
    }
};
class SBI : public RBI
{
    public: void loan()
    {
        cout<<"SBI intrest rate=8.5%\n";
    }
};
class AXIS : public RBI
{
    public: void loan()
    {
        cout<<"AXIS intrest rate=9.5%\n";
    }
};
class INDIAN : public RBI
{
    public:
    void loan()
    {
        cout<<"INDIAN intrest rate=9.8%\n";
    }
};
class HDFC : public RBI
{
    public:
    void loan()
    {
        cout<<"HDFC intrest rate=8.8%\n";
    }
};
int main()
{
   RBI *R;
   SBI S;
   R=&S;
   R->loan();
   AXIS X;
   R=&X;
   R->loan();
   INDIAN I;
   R=&I;
   R->loan();
   HDFC H;
   R=&H;
   R->loan();
}