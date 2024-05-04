#include<iostream>
using namespace std;
class alpha
{
    public: void pha()
    {
        cout<<"This is apha class:\n";
    }
};
class beta : virtual public alpha
{
    public:void bet()
    {
        cout<<"This is beta class:\n";
    }
};
class gamma: public beta
{
    public:void gama()
    {
        cout<<"This is gamma class:\n";
    }
};
int main()
{
    gamma g;
    g.gama();
    g.bet();
    g.pha();
}