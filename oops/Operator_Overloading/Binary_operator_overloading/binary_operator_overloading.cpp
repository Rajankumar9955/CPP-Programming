/*
Binary Operator overloading
*/
#include<iostream>
using namespace std;
class geo
{
    int x,y;
    public:geo(int x=0,int y=0):x{x},y{y} //this is use for same value print 
    {                                     //it is replace the this keyword
        // this->x=x;
        // this->y=y;
    }
    geo operator +(geo &obj)
    {
        geo g;
        g.x=x+obj.x;
        g.y=y+obj.y;
        return g;
    }
    void show()
    {
        cout<<"x:"<<x<<"y:"<<y<<"\n";
    }
};
int main()
{
    geo g1(20,10);
    geo g2(10,20);
    geo g3;
    g3=g1+g2;
    g3.show();
}