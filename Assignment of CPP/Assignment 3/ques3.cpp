#include<iostream>
using namespace std;
int main()
{
    int n,a[100],max, min;
    cout<<"enter the numbers of array:";
    cin>>n;
    cout<<"enter the element of array:";
    for(int i=0; i<n; ++i)
    {
        cin>>a[i];
    }
    max=a[0];
    for(int i=0; i<n; ++i)
    {
        if(max<a[i]){
            max=a[i];
        }
    }
    min=a[0];
    for(int i=0; i<n; ++i)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
    cout<<"maximum of an array: "<<max<<" and minimun of an array:"<<min;

}

/*output:-
enter the numbers of array:5
enter the element of array:1
2
3
4
5
maximum of an array: 5 and minimun of an array:1
*/