#include<iostream>
using namespace std;
class alpha
{
    public:void pha()
    {
        cout<<"This is apha class";
    }
};
class beta:virtual public alpha
{
    public:void eta()
    {
        cout<<"This is beta class";
    }
};
class gamma:public beta
{
    public:void gama()
    {
        cout<<"This is gamma class:";
    }
};
int main()
{
    gamma g;
    g.pha();
    g.eta();
    g.gama();
}