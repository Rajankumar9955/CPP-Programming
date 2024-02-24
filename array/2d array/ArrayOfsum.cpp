#include<iostream>
using namespace std;
int main()
{
    int a[3][3]={12,52,65,35,65,86,54,23,65,};
    int sum=0;
    for(int r=0;r<=2; ++r)
    {
        for(int c=0; c<=2; ++c)
        {
            sum=sum+a[r][c];
        }
    }
    cout<<"sum: "<<sum;
}










