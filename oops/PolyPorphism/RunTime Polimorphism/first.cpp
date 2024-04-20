#include<iostream>
using namespace std;
class SBIATM
{
    public : void Balance()
    {
        cout<<"Wel-come sbi\n";
    }
};
class AXIS : public SBIATM
{
    public : void Balance()
    {
        cout<<"wel-come axis\n"
    }
};
int main()
{
    AXIS obj;
    SBIATM &S=obj;
    S.balance();
}