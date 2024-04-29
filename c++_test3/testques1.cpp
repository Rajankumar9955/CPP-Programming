#include<iostream>
using namespace std;
class alpha
{
    public:void pha()
    {
        cout<<"Hello from alpha:\n";
    }
};
class beta:virtual public alpha 
{
    public: void eta()
    {
        cout<<"hello from beta:\n";
    }
};
class gamma:public beta
{
    public : void gama()
    {
        cout<<"Hello from gamma:\n";
    }
};
int main()
{
    gamma g;
    g.gama();
    g.eta();
    g.pha();
}
