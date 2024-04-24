/*#include<iostream>
using namespace std;
class sbiatm
{
     public:virtual void balance()
    {
        cout<<"Wel-come to sbi atm\n";
    }
    virtual void dfc()
    {
        cout<<"hello\n";
    }

};
class axis : public sbiatm
{
    public:void balance()
    {
        cout<<"wel-come to axis\n";
    }
};
class hdfc : public sbiatm
{
    public : void balance()
    {
        cout<<"wel-come to hdfc bank\n";
    }
    public:void dfc()
    {
        cout<<"wel-babe\n";
    }
};
int main()
{
    // axis a;
    // sbiatm &s=a;
    // s.balance();
    sbiatm *s=new hdfc();
    s->dfc();
}
*/



#include<iostream>
using namespace std;
class rbiatm
{
    public:virtual void balance()
    {
        cout<<"welcome to the rbi atm\n";
    }
    virtual void ashow()
    {
        cout<<"hello\n";
    }
};
class sbi:public rbiatm
{
    public:void balance()
    {
        cout<<"welcome to sbi sbi bank\n";
    }
};
class axis:public rbiatm
{
    public: void balance()
    {
        cout<<"welcome to the axis bank\n";
    }
    public:void ashow()
    {
        cout<<"How are you buddy\n";
    }
};
int main()
{
    rbiatm *s=new axis();
    s->ashow();
}
