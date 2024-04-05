#include<iostream>
using namespace std;
class raj
{  
    int c;
   public:void show(int a,int b)
    {
         c=a+b;

    }
    void result()
    {
        cout<<c;
    }
};
int main()
{
    raj j;
    j.show(20,10);
    j.result();
}