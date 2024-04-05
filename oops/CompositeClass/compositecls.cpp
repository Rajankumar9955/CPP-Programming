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
