#include<iostream>
using namespace std;
class cybrom2;
class cybrom1
{
    int x=20;
    public:friend void swap(cybrom1 obj,cybrom2 obj1);
};
class cybrom2
{
    int y=10;
    public: friend void swap(cybrom1 obj, cybrom2 obj1);
};
void swap(cybrom1 obj,cybrom2 obj1)
{
    int temp;
    temp = x.obj;
    x.obj = y.obj1;
    y.obj1 = temp;
    cout<<"after swapping:"<<x.obj<<y.obj1;
}
int main()
{
    cybrom1 c1;
    cybrom2 c2;
    swap(c1,c2);
}