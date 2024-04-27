#include<iostream>
using namespace std;
class raj
{
    static int a;
    public:raj()
    {
        a++;
    }
    public:void show()
    {
cout<<a;
    }
};
int raj::a=0;
int main()
{
    raj j;
    raj j2;
    raj j3;
    j3.show();

}
