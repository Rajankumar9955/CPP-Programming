#include<iostream>
#include<cstring>
using namespace std;
class shop
{
    int ItemCode[100];
    string ItemName[100];
    float price[100];
    int total=0;
    int count=0;
    public:void add()
    {
        for(int i=0; i<100; ++i)
        {
            cout<<"Enter the Item-Code:";
            cin>>ItemCode[i];
            cout<<"Enter the Item-Name:";
            cin>>ItemName[i];
            cout<<"Enter the Price:";
            cin>>price[i];
            int n;
            cout<<"Press the 1 to continue shopping or Press 0 to Generate the bills: ";
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
        cout<<"\n";
        cout<<"Item-Code"<<"\t"<<"Item-Name"<<"\t"<<"Price"<<"\n";
        for(int i=0; i<count; ++i)
        {
            cout<<ItemCode[i]<<"\t\t"<<ItemName[i]<<"\t\t"<<price[i]<<"\n";
            total=total+price[i];
        }
        cout<<"\n";
        cout<<"Total Items Bills:"<<total;
    }
    void CountItem()
    {
        cout<<"\n";
        cout<<"Total Items:"<<count<<"\n";
    }
    void cancel()
    {
        cout<<"\n";
        int s;
        cout<<"Enter the Item-Code for cancel:";
        cin>>s;
        for(int i=0;i<count; ++i)
        {
        if(ItemCode[i]==s)
        {
            ItemCode[i]=0;
            ItemName[i]="0";
            price[i]=0;
            total=0;
        }
        else if(ItemCode[i]!=s)
        {
            cout<<"This is Invalid Item-Code:";
            break;
        }
        cout<<"\n";
    }
    }
};
int main()
{
    shop p;
    p.add();
    p.show();
    p.CountItem();
    p.cancel();
    p.show();
}