#include<iostream>
using namespace std;
class pop
{
    const int t;
    public:pop(int t=8):t{t}
    {
        
    }
    void show()
    {
        cout<<t;
    }
};
int main()
{
    pop p(12);
    p.show();
}