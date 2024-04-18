#include<iostream>
using namespace std;
class tenth
{
    public:tenth()
    {
       cout<<"Tenth constructors\n";
    };
    ~tenth()
    {
        cout<<"tenth destructors\n";
    }
    public:void result10()
    {
        cout<<"First devision\n";
    }
};
class twelve
{   
    public:twelve()
    {
       cout<<"twelve constructors\n";
    };
    ~twelve()
    {
        cout<<"twelve destructors\n";
    }
    void result12()
    {
        cout<<"second devision\n";
    }
};
class friends:public tenth,public twelve
{
    public:void show()
    {
        cout<<"Friends\n";
    }
};
int main()
{
    friends f;
    f.show();
    f.result10();
    f.result12();
}