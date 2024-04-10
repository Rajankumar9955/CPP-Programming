#include<iostream>
using namespace std;
class chair
{
    int c;
    public:void sum(int a, int b)
    {
        c=a+b;
        cout<<c;
    }
};
int main()
{
    chair r;
    int a,b;
    cout<<"enter the first number:";
    cin>>a;
    cout<<"enter the second number:";
    cin>>b;
    r.sum(a,b);
}

