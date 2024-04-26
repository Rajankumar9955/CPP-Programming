/*#include<iostream>
using namespace std;
class reward
{
    public:void prize()
    {
        cout<<"Your system got hacked\n";

    }
};
class sbi:public reward
{
    public:void prize()
    {
        cout<<"$254500255455\n";

    }
};
class customer:public sbi
{
    public:void cust()
    {    
        prize();
        cout<<"Wel-come customer\n";
    }
};
int main()
{
    customer r;
    r.cust();
    r.prize();
}
*/


#include<iostream>
using namespace std;
class reward
{
    protected:void prize()
        {
          cout<<"Your system got hacked ab";

        }
};
class sbi:public reward  
{
    public:
    void prize()
    {
        cout<<"$4587554\n";
    }
};
class customer: public sbi
{
    public: void cust()
{
    prize();
    cout<<"Wel-come customer\n";
}
};
int main()
{
    customer obj;
    obj.cust();
    obj.prize();
}