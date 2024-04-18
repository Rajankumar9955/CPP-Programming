#include<iostream>
using namespace std;
class rbi
{
    public:
    void rbifun()
    {
        cout<<"RBI\n";
    }
};
class sbi:public rbi
{
    public:void loan()
    {
        cout<<"sbi=8%\n";
    }
};
class hdfc:public rbi
{
    public:void loan()
    {
        cout<<"hdfc=9%\n";
    }
};
class axis:public rbi
{
    public:void loan()
    {
        cout<<"axis=12%\n";
    }
};
int main()
{
    sbi s;
    s.rbifun();
    s.loan();
    hdfc h;
    h.rbifun();
    h.loan();
    axis a;
    a.rbifun();
    a.loan();
}