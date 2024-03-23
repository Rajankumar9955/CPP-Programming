// check even number in an array
#include<iostream>
using namespace std;
int main()
{   int sum=0;
    int a[3][3]={2,5,6,7,10,54,20,2,6};
    for(int r=0; r<=2; ++r)
    {
       for(int c=0; c<=2; ++c)
     {
        if(a[r][c]/2!=0)
        {
            cout<<"even number";
        }
        
     }
    

    }
   
    
}


