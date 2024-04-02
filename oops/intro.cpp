#include<iostream>
using namespace std;
class joy
{
    int a,b;
   public: void sum()
    {
        a=10;b=50;
        cout<<a+b;
    }
};
int main()
{
    joy k;
    k.sum();
}