// // using friend function
// #include<iostream>
// using namespace std;
// class raj2;
// class raj
// {
//     int x=50;
//     public:friend void sum(raj obj,raj2 obj2);
    
// };
// class raj2
// {
//     int y=20;
//     public:friend void sum(raj obj,raj2 obj2);
    
// };
// void sum(raj obj , raj2 obj2)
// {
//     if(obj.x>obj2.y)
//     {
//         cout<<obj.x;
//     }
//     else
//     {
//         cout<<obj2.y;
//     }
//     // cout<<obj.x+obj2.y;
// }
// int main()
// {
//     raj j;
//     raj2 j1;
//     sum(j,j1);
// }



#include<iostream>
using namespace std;
class raj2;
class raj
{
    int x=30;
    public:friend void sum(raj obj,raj2 obj2);
};
class raj2
{
    int y=110;
    public:friend void sum(raj obj , raj2 obj2);
};
void sum(raj obj, raj2 obj2)
{
    if(obj.x>obj2.y)
    {
        cout<<obj.x;
    }
    else
    {
        cout<<obj.x+obj2.y;
    }
}
int main()
{
    raj r1;
    raj2 r2;
    sum(r1,r2);
}





