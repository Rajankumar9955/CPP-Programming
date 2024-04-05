#include<iostream>
using namespace std;
class raj
{   
    int r;
    public:void sqr(int a)
    {
      r=a*a;
    }
    void sqr()
    {
        cout<<"squre="<<r;
    }
};
int main()
{
   raj r;
   int s;
   cout<<"enter the number:";
   cin>>s;
   r.sqr(s);
   cout<<"\n";
   r.sqr();
}