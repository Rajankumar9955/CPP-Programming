// // #include<iostream>
// // using namespace std;
// // class student
// // {
// //     char sname[11];
// //     int marks[5];
// //     int total=0;
// //     int tmax=0;
// //     public:void assign()
// //     {
// //         cout<<"enter the student name please:";
// //         cin>>  sname;
// //         cout<<"enter the student marks please:";
// //         for(int i=0; i<5; ++i)
// //         {
// //             cin>>marks[i];
// //         }
// //     }
// //     void compute()
// //     {
// //         for(int i=0; i<5; ++i)
// //         {
// //             total=total+marks[i];
// //            if(tmax<marks[i])
// //            {
// //             tmax=marks[i];
// //            }
// //         }
// //     }
// //     void display()
// //     {
// //         cout<<"total number:"<<total<<"\n";
// //         cout<<"tmax number:"<<tmax<<"\n";
// //     }
// // };
// // int main()
// // {
// //     student s;
// //     s.assign();
// //     s.compute();
// //     s.display();
// // }



// // #include<iostream>
// // using namespace std;
// // class fib
// // {
// //     int n1=0;
// //     int n2=1;
// //     int f=0;
// //     public: fib(int n)
// //     {
// //         cout<<n1<<"\t"<<n2<<"\t";
// //         while(n!=0)
// //         {
// //             f=n1+n2;
// //             n1=n2;
// //             n2=f;
// //             cout<<"\t"<<f;
// //             n--;
// //         }
// //     }
// // };
// // int main()
// // {
// //     int s;
// //     cout<<"enter the fibo.. number:";
// //     cin>>s;
// //     fib f(s);

// // }

// #include<iostream>
// #include<cstring>
// using namespace std;
// class shop
// {
//     int ItemCode[100];
//     string ItemName[100];
//     float Price[100];
//     int Total=0;
//     int Count=0;
//     public: void add()
//     {
//         for(int i=0; i<100; ++i)
//         {
//             cout<<"enter the Item-Code:";
//             cin>>ItemCode[i];
//             cout<<"Enter the Item-Name:";
//             cin>>ItemName[i];
//             cout<<"Enter the price:";
//             cin>>Price[i];
//             int n;
//             cout<<"Press 1 for continue or 0 for calculate the bills:";
//             Count++;
//             cin>>n;
//             if(n==1)
//             {
//                 continue;
//             }
//             else
//             {
//                 break;
//             }
//         }
//     }
//     void show()
//     {
//         cout<<"\n";
//         cout<<"Item-Code"<<"\t"<<"Item-Name"<<"\t"<<"Price"<<"\n";
//         for(int i=0; i<Count; ++i)
//         {
//            cout<<ItemCode[i]<<"\t\t"<<ItemName[i]<<"\t\t"<<Price[i]<<"\n";
//            Total=Total+Price[i];
//         }
//         cout<<"\n";
//         cout<<"Total Bills:"<<Total;
//     }
//     void CountItem()
//     {
//         cout<<"\n";
//         cout<<"Total Number of Item:"<<Count;
//     }
//     void cancel()
//     {
//         cout<<"\n";
//         int s;
//         cout<<"Enter the Item-Code to cancel the Item:";
//         cin>>s;
//         for(int i=0; i<Count; ++i)
//         {
//             if(ItemCode[i]==s)
//             {
//                 ItemCode[i]=0;
//                 ItemName[i]="0";
//                 Price[i]=0;
//                 Total=0;
//             }
//             else if(ItemCode[i]!=s)
//             {
//                 cout<<"This is Invalid Item-code:";
//             }
//             {

//             }
//         }
//     }

// };
// int main()
// {
//     shop p;
//     p.add();
//     p.show();
//     p.CountItem();
//     p.cancel();
//     p.show();
// }


#include<iostream>
using namespace std;
class raj2;
class raj
{
    int x=20;
    public: friend void sum(raj obj, raj2 obj2);
};
class raj2
{
    int y=20;
    public: friend void sum(raj obj, raj2 obj2);
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
};
int main()
{
    raj f;
    raj2 f2;
    sum(f,f2);
}