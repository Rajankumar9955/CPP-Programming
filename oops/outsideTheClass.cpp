#include<iostream>
using namespace std;
class raj
{
    int c;
   public: void result (int a, int b);
};
void raj:: result(int a,int b)
{
    c=a+b;
    cout<<c;
}
int main()
{
    raj k;
    cout<<"done bro\n";
    k.result(5,9);
    
}