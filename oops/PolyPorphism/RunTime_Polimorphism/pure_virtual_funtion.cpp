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
class rbi
{
    public: virtual void loan()=0;
    void msg()
    {
        cout<<"hello\n";
    }
};
class sbi:public rbi
{
    public:void loan()
    {
        cout<<"sbi Intrest rate is=8.5%\n";
    }
};
class axis: public rbi
{
    public:void loan()
    {
        cout<<"axis loan inrest rate is=9.5%\n";
    }
};
class indian:public rbi
{
    public:void loan()
    {
        cout<<"indian loan intrest rate is 7.9%\n";
    }
};
int main()
{
    rbi *r;
    sbi s;
    r=&s;
    r->loan();
    axis a;
    r=&a;
    r->loan();
    indian n;
    r=&n;
    r->loan();
}