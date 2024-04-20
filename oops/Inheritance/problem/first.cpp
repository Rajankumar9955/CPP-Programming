// using intiaizers list
#include<iostream>
using namespace std;
class rbi
{
    public:
    rbi(int a=0)
    {
        cin>>a;
        cout<<a<<"\n";
    }
};
class sbi:public rbi
{
    public:
     sbi()
    {
      cout<<"Hello from sbi";
    }
};
int main()
{
    sbi s;
}