/*
Operator overloading having two types
(1)Unary Oprator Overloading (+,-,/,%,||)
(2)Binary Operator ovarloading(++,--)

*/

#include<iostream>
using namespace std;
class top
{
    int a=0;
    public:void operator ++()
    {
        a=a+1;
        cout<<a<<"\n";
    }
    public:void operator --()
    {
        a=a-1;
        cout<<a<<"\n";
    }
};
int main()
{
    top t1;
    ++t1;
    --t1;
}
