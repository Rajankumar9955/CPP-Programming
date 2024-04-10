//static data member and static member function

// (static data member)
//static data member is accessble throghout the entire program
//we can declrear static data member or variable with the help of static keyword

//ex  syntax 
//         static int a
//it is a attribute  of a class  while non static data member is attribute of object.

//the static member does not create a copy of it . it share its own memory.


//note-- the static data member should be intialized outside the of class with the help of scope
//resulation operator 
//ex  int cybrom::a;
// data type  class name:: variable;


//(static member function)


//we can declear static data member  function inside a class and this function only support
// data member.
//we can access the static member function without an object by using class name as well as
//using object also

#include<iostream>
using namespace std;
// static data member function;
// class cybrom
// {
//     static int a;
//     int x;
//     public:void show()
//     {
//         x=90;
//         cout<<x;
//     }
//     static void result(){
//         a=900;
//         cout<<a;
        
//     }
// };
//  int cybrom::a;
//  int main(){
//     cybrom p;
//     p.show();
//     cybrom::result();
//  }
class top {
    public:int a;
    static int b;

};
int top::b=10;
int main(){
    top obj1;
    obj1.a=100;
    obj1.b=90;
    cout<<"a="<<obj1.a<<"\n";
    cout<<"b="<<obj1.b<<"\n";

    top::b=200;
    cout<<"b="<<top::b<<"\n";
    cout<<"b="<<obj1.b<<"\n";

}