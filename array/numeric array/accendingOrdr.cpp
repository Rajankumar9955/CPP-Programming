// WAP to print accending order to given number

// int main(){
//     int a[]={100,2,98,77,6};
//     int t,n;
//      n= sizeof (a)/sizeof (a[0]);
//     for(int i=0; i<n; ++i)
//     {
//         for(int j=0; j<n-i-1; ++j)
//         {
//             if (a[j]>a[j+1])
//             {
//                 t=a[j+1];
//                 a[j+1]=a[j];
//                 a[j]=t;
//             }
//         }    
//     }      
//     for(int k=0; k<n;++k)
//     {
//         cout<<a[k]<<"\n";
//     }
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int a[]={120,53,458,65,42};
//     int t,n;
//     n= sizeof (a)/sizeof (a[0]);
//     for(int i=0; i<n; ++i)
//     {
//         for(int j=0; j<n-i-1; ++j)
//         {
//             if(a[j]>[j+1])
//             {
//                 t=a[j+1];
//                 a[j+1]=a[j];
//                 a[j]=t;
//             }
//         }
//     }
//     for(int k=0; k<n; ++k)
//     {
//         cout<<a[k]<<"\n";
//     }
// }

// ==================Decending order================
#include<iostream>
using namespace std;
int main()
{
    
    int a[]={520,450,32,12,10,5,96,35,75,22};
    int t,n;
    n=sizeof(a)/sizeof(a[0]);
    for(int i=0; i<n; ++i)
    {
        for(int j=0; j<n-i-1; ++j)
        {
            if(a[j]<a[j+1])
            {
                t=a[j+1];
                a[j+1]=a[j];
                a[j]=t;
            }
        }
    }
    for(int k=0; k<n; ++k)
    {
        cout<<a[k]<<"\n";
    }
}