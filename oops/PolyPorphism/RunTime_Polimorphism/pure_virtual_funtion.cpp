#include<iostream>
using namespace std;
class RBI
{
    public: virtual void loan()=0;
    void msg()
    {
            cout<<"welcome to RBI";
    }
};
class SBI : public RBI
{
    public:void loan()
    {
        cout<<"SBI 8.5%\n";
    }
};
class AXIS : public RBI
{
    public:void loan()
    {
        cout<<"AXIS 9.5%";
    }
};
int main()
{
    RBI *s;
    SBI sb;
    s=&sb;
    s->loan();
    AXIS a;
    s=&a;
    s->loan();
}