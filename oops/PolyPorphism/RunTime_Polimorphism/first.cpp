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
class SBIATM
{
    public:virtual void BALANCE()
    {
       cout<<"welcome to sbi\n";
    }
    virtual void axshow()
    {
        cout<<"sbimsg\n";
    }
};
class AXIS : public SBIATM
{
    public:void BALANCE()
    {
        cout<<"welcome axis\n";
    }
    public:void axshow()
    {
        cout<<"axis show\n";
    }
};
class PNB : public SBIATM
{
    public: void BALANCE()
    {
        cout<<"welcome PNB\n";
    }
};
int main()
{
    // AXIS obj;
    // SBIATM &s=obj;
    // s.BALANCE();

    SBIATM *s=new AXIS();
    s->axshow();
}