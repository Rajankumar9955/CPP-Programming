#include<iostream>
using namespace std;
class job
{
   public: job(int a)
    {
        cout<<a*a<<"\n";
    }
void show()
{
    cout<<"done";

}
};
int main()
{
    int a;
    cout<<"enter the number\n";
    cin>>a;
    job j(a);
    j.show();
}
