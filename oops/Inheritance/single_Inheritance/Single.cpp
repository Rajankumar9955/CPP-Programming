#include<iostream>
using namespace std;
/*
class rbi
{
    int a=10;
    public:void msg()
    {
        cout<<a;
    }

};
class sbi:public rbi
{
    int s=200;
    public:void alert()
    {
        cout<<s<<"\n";
    }
};
int main()
{
    sbi s;
    cout<<"size of sbi="<<sizeof(s)<<"\n";
    s.alert();
    s.msg();
}
*/

class reward
{
    protected:void virus()
    {
      cout<<"Ur system got hacked"<<"\n";
    }
};
class sbi:public reward
{
    public:void prize()
    {
        virus();
          cout<<"$2000000"<<"\n";
    }
};
int main()
{
    sbi r;
    r.prize();
}