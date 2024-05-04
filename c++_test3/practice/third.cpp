#include<iostream>
using namespace std;
class person
{
    char name[5];
    int age[5];
    char country[5];
    public: void set()
    {
        for(int i=0; i<5; ++i)
        {
            cout<<"Enter the Name please:\n";
            cin>>name[i];
            cout<<"Enter the Age of Person:\n";
            cin>>age[i];
            cout<<"Enter the country please:\n";
            cin>>country[i];
            int n;
            cout<<"Enter the 1 continue or 0 for show the result:";
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
    // void get()
    // {
    //     cout<<"\n";
    //     cout<<"Name\t\t"<<"Age\t\t"<<"Country\t\t"<<"\n";
    //     for(int i=0; i<5; ++i)
    //     {
    //         cout<<name[i]<<"\t"<<age[i]<<"\t"<<country[i]<<"\n";
    //     }
    // }
};
int main()
{
    person p;
    p.set();
    // p.get();
}