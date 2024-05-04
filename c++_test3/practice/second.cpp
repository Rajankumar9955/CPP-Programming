#include<iostream>
using namespace std;
class rectangle
{
    float lenth=10.12;
    float width=52.1;
    float c;
    public:void area()
    {
        c=lenth*width;
        cout<<"Area of rectagle:"<<c<<"\n";
    }
    void pirameter()
    {
        c=2*(lenth+width);
        cout<<"Reactagle of pirameter:"<<c;
    }
};
int main()
{
    rectangle  e;
    e.area();
    e.pirameter();
}