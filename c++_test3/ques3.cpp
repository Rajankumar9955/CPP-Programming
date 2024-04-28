#include<iostream>
using namespace std;
#include<cstring>
class shop
{
    int itemcode[100];
    string itemname[100];
    float price [100];
    int total=0;
    int count=0;
    public: void add()
    {
        for(int i=0; i<100; ++i)
        {
            cout<<"enter the item code:\n";
            cin>>itemcode[i];
            cout<<"enter the itemname:\n";
            cin>>itemname[i];
            cout<<"enter the price:\n";
            cin>>price[i];
            int n;
            cout<<"enter the 1 to continue shopping\nand enter the 0 to calculate bill:";
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
        cout<<"\n"<<"\n";
        cout<<"itemcode"<<"\t"<<"itemname"<<"\t\t"<<"price"<<"\n";
        for(int i=0; i<count; ++i)
        {
            cout<<itemcode[i]<<"\t"<<"\t"<<itemname[i]<<"\t"<<"\t"<<price[i]<<"\n";
            total=total+price[i];
        }
        cout<<"\n";
        cout<<"total bill="<<total<<"\n";

    }
    void countitem()
    {
        cout<<"\n"<<"\n";
        cout<<"total number of item="<<count<<"\n";

    }
    void cancel()
    {
        cout<<"\n"<<"\n";
        int s;
        cout<<"enter item code to cancel the product:";
        cin>>s;
        for(int i=0; i<count; ++i)
        {
            if(itemcode[i]==s)
            {
                itemcode[i]=0;
                itemname[i]="0";
                price[i]=0;
                total=0;
            }
        }
    }
    
};
int main()
{
   
        shop p;
        p.add();
        p.show();
        p.countitem();
        p.cancel();
        p.show();
    
}