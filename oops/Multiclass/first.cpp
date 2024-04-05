#include<iostream>
using namespace std;
class top
{
   public: void show()
    {
        cout<<"result";
    }
};
class top1
{
    public:void show1()
    {
        cout<<"result1";
    }
};
int main()
{
   top t;
   top1 t1;
   t.show();
   cout<<"\n";
   t1.show1();

}