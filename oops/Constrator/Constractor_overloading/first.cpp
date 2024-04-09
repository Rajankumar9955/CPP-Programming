#include<iostream>
using namespace std;
class job
{
public:job(int a)
{
        cout<<a*a<<"\n";
}
job()
{
    cout<<"memory allocated\n";

}
};
int main()
{
    job j;
    job j1(5);
}