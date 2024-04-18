#include<iostream>
using namespace std;
class tenth
{
    public:void result()
    {
        cout<<"first Devision";
    }
};
class twelve
{
    public:void result()
    {
        cout<<"second devision";
    }
};
class friends:public tenth,public twelve
{
    public:void show()
    {
        cout<<"friends";
    }
};
int main()
{
    friends f;
    f.show();
    f.result();
}