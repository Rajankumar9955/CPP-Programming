// #include<iostream>
// using namespace std;
// class store
// {
//     int codeNo[100];
//     float price[100];
//     int total=0;
//     int count=0;
//     public:void adding()
//     {
//         for(int i=0; i<100;++i)
//         {
//             cout<<"Enter the code No:";
//             cin>>codeNo[i];
//             cout<<"Enter the Price:";
//             cin>>price[i];
//             int n;
//             cout<<"Press 1 for continue or 0 for generate the bills:";
//             count++;
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
//         cout<<"Code-No:"<<"\t"<<"Price\n";
//         for(int i=0; i<count; ++i)
//         {
//            cout<<codeNo[i]<<"\t\t"<<price[i]<<"\t\t"<<"\n";
//             total=total+price[i];
            
//         }
//             cout<<"\n";
//             cout<<"Total value of item:"<<total<<"\n";
        
//     }
//     void cancel()
//     {
//         cout<<"\n";
//         int s;
//         cout<<"Enter code-No for delete the product:";
//         cin>>s;
//         for(int i=0; i<count; ++i)
//         {
//             if(codeNo[i]==s)
//             {
//                 codeNo[i]=0;
//                 price[i]=0;
//                 total=0;
//             }
//         }
//     }
   

// };
// int main()
// {
//     store e;
//     e.adding();
//     e.show();
//     e.cancel();
//     e.show();
// }


#include<iostream>
#include<cstring>
using namespace std;
class store
{
    int code[100];
    float price[100];
    int count=0;
    int total=0;
    public:void adding(){
    for(int i=0; i<100; ++i)
    {
        cout<<"Enter the item code:";
        cin>>code[i];
        cout<<"Enter the Price of Item:";
        cin>>price[i];
        int n;
        cout<<"Press 1 for continue or 0 for generate the tatal value:";
        count++;
        cin>>n;
        if(n==1)
        {
            continue;
        }
        else
        {
            break;
        }
     }
    }
    void show()
    {
      cout<<"Item\t"<<"Price\n";
      for(int i=0; i<count; i++)
      {
           cout<<code[i]<<"\t"<<price[i]<<"\n";
           total=total+price[i];
       }
       cout<<"\n";
       cout<<"Total value:"<<total<<"\n";
    } 
    void delet()
    {
        int s;
        cout<<"if you you want to delete the item then enter item code:";
        cin>>s;
        for(int i=0; i<count; i++)
        {
           if(code[i]==s)
           {
            code[i]=0;
            price[i]=0;
            total=0;
           }
        }
       
    } 

};
int main()
{
    store s;
    s.adding();
    s.show();
    s.delet();
    s.show();
}