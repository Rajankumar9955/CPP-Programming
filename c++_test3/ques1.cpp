// // write a program to implement a class student having following
// #include<iostream>
// using namespace std;
// class student
// {
//     char sname[10];
//     int marks[3];
//     int total;
//     int tmax;
//     public:void assigns()
//     {
//         cout<<"enter the student name\n";
//         cin>>sname;
//         cout<<"enter the marks of 3 students\n";
//         for(int i=0; i<3;++i)
//         {
//             cin>>marks[i];
//         }
//     }  
//     void compute()
//     {
//         total=0;
//         tmax=0;
//         for(int i=0; i<3;++i)
//         {
//             total=total+marks[i];
//             if(tmax<marks[i])
//             {
//                 tmax=marks[i];
//             }
//         }
//     }
//     void display()
//     {
//         cout<<"total marks obtained="<<total<<"\n";
//         cout<<"max marks="<<tmax<<"\n";
//     }
// };
// int main()
// {
//     student s;
//     s.assigns();
//     s.compute();
//     s.display();
// }


#include<iostream>
using namespace std;
class student
{
    char sname[11];
    int marks[5];
    int total=0;
    int tmax=0;
    public:void assign()
    {
        cout<<"enter the sname: ";
        cin>>sname;
        cout<<"enter the marks: ";
        for(int i=0; i<5; ++i)
        {
            cin>>marks[i];
        }
    }
    void compute()
    {
        for(int i=0; i<5; ++i)
        {
            total=total+marks[i];
            if(tmax<marks[i]);
            {
                tmax=marks[i];
            }
        }
    }
    void display()
    {
        cout<<"total number:"<<total;
        cout<<"tmax number:"<<tmax;
    }
};
int main()
{
    student s;
    s.assign();
    s.compute();
    s.display();
}