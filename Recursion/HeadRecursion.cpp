#include<iostream>
using namespace std;
void recur(int n)
{
if(n==0)
{
    return;
}
cout<<n<<"\n";//Head recursion
recur(n-1);

}
int main()
{
    int n;
    cout<<"enter any number:";
    cin>>n;
    recur(n);

}
