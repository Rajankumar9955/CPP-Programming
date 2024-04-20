#include<iostream>
using namespace std;
class rbi
{
    public:
    void msg()
    {
        cout<<"Hello from RBi\n";
    }
};
class sbi:virtual public rbi
{
    public:
    void smsg()
    {
        cout<<"hello from sbi\n";
    }
};
class axis:virtual public rbi
{
    public:
    void amsg()
    {
        cout<<"Hello from axis\n";
    }
};
class cust:public axis,public sbi
{
    public:
    void cmsg()
    {
        cout<<"hello customer\n";
    }
};
int main()
{
    cust c;
    c.cmsg();
    c.amsg();
    c.smsg();
    /* c.axis::msg();*/    //without virtual 
    c.msg();              //with virtal
    
    
}