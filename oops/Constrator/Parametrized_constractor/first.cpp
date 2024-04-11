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



// #include<iostream>
// using namespace std;
// class top
// {
//     public:top(int a)
//     {
//        cout<<"square is:="<<a*a<<"\n";
//     }
//     void show(int c)
//     {    
        
//         for(int s=1; s<=10; s++)
//         {
//             cout<<c*s<<"\n";
//         }
//     }
//     void shoe(int s,int r)
//     { 
//        int temp;
//        temp=s;
//        s=r;
//        r=temp;
//        cout<<"first number:="<<s<<"\n"<<"Second number:="<<r;
//     }
// };
// int main()
// {
//     int b,c;
//     cout<<"enter the number:";
//     cin>>b;
//     cout<<"enter the number please:";
//     cin>>c;
//     top t(b);
//     t.show(b);
//     t.shoe(b,c);

// }
