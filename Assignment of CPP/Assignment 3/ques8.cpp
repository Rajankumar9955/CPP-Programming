#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,20,30,40,50,60,20,10,30};
    int n=sizeof(arr)/sizeof(arr[0]);
    int visit[n];
    for(int i=0; i<n; ++i)
    {
        if(visit[i]!=1)
        {
            int count = 1;
            for(int j=i+1; j<n; j++)
            {
                if(arr[i]==arr[j])
                {
                    count++;
                    visit[j]=1;
                }
            }
            cout<<arr[i]<<" occurs at "<<count<<" times "<<"\n"; 
        }
    }
}

/*
output:-
10 occurs at 2 times 
20 occurs at 2 times 
30 occurs at 2 times 
40 occurs at 1 times 
50 occurs at 1 times 
60 occurs at 1 times 
*/