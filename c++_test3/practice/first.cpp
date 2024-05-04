// wap a program to calcule area of circle and area of circumstance;
#include<iostream>
using namespace std;
class circle
{
    float r=10;
    float c;
    public:void area()
    {
        c=3.14*r*r;
        cout<<"Area of circle:"<<c<<"\n";
    }
    void circumstance()
    {
        c=2*3.14*r;
        cout<<"Area of circumstance:"<<c<<"\n";
    }

};
int main()
{
    circle s;
    s.area();
    s.circumstance();
}