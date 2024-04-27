#include<iostream>
using namespace std;
class shop
{
    int itemcode[568];
    char itemname[50];
    int price;
    int total;
    // int count;
    public:void add()
    {
        cout<<"enter the item code please:\n";
       for(int i=0; i<5; ++i)
       {
        cin>>itemcode[i];
       }
        cout<<"enter the item name please:\n";
        for(int i=0; i<5; ++i)
        {
            cin>>itemname[i];
        }
        cout<<"enter the price please:\n";
       for(int a=0; a<5; ++a)
       {
        cin>>price[a];
       }
    }
    void countites()
    {
        total=0;
        for(int i=0; i<5; ++i)
        {
            totalitems=total+itemsname[i];
        }
        for(int i=0; i<5; ++i)
        {
                totalprice=price+price[i];
        }
    }
     void show()
    {
        cout<<"your items code is="<<itemcode[i]<<"\n";
        cout<<"your items name="<<itemname[i]<<"\n";
        cout<<"your items price ="<<price[a]<<"\t";
    }
};
int main()
{
    shop p;
    p.add();
    p.show();
    p.price();
    p.cancel();
}
