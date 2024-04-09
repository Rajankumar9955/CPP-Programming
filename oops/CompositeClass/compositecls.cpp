// a class which is having an object of previews class is considered as a composite class

#include<iostream>
using namespace std;
class faculty
{
   public: int id=120;
    public:void code()
    {
        cout<<"faculty have the code\n";
    }
};
class student 
{    
    faculty f;
     public:void show()
    {
        cout<<"Faculty code="<<f.id;
    }
};
int main()
{
    faculty f;
    student s;
    f.code();
    s.show();
}




// #include<iostream>
// using namespace std;\
// class raj
// {
//     public:int roll=1900420;
//     public:int  code=52032;
//     public:void show()
//     {
//         cout<<"Allright\n";
//     }
// };
// class raja
// {      
//     raj s;
//     public:void matric()
//     {
//         cout<<"Your martic result"<<"\n";
//         cout<<"your roll number="<<s.roll<<"\n";
//         cout<<"your roll code="<<s.code<<"\n";
//     }

// };
// int main()
// {   
//     raj s;
//     raja r;
//     s.show();
//     r.matric();

// }