#include<iostream>
using namespace std;
int main()
{
    int n=1;
    int n1;
    cout<<"enter number:";
    cin>>n1;
    while(n1>=n)
    {
        cout<<n<<"\t"; 
        n++;
    }
}
/*
output:-
enter number:10
1       2       3       4       5       6       7       8       9       10
*/