#include<iostream>
using namespace std;
class raj
{
   int fact=1;
   public:
   void table(int a)
    {
        for(int i=0; i<=10; i++)
        {
            cout<<a<<"*"<<i<<"="<<a*i<<"\n";
        }
    }
    void factorial(int b)
    {
        for(int i=2; i<=b; i++)
        {
            fact=fact*i;
        }
        cout<<fact;
    }
    void squre(int c)
    {
        cout<<"square="<<c*c;
    }
};
int main()
{
    raj r;
    int t;
    cout<<"enter the number:";
    cin>>t;
    r.table(t);
    cout<<"factorial=";r.factorial(t);
   cout<<"\n"; r.squre(t);
}