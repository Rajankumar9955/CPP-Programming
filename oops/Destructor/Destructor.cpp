/*destructor is used to deallocate the memory of an object it calls implicitly 
the destructor is defined by using tilled(~) symbol along with class name and without using any parameter
*/
#include<iostream>
using namespace std;
class top
{  
    public:
   void show()
   {
    cout<<"example of destrutor\n";
   }
   top()
   {
    cout<<"memory allocated\n";
   }
   ~top()
   {
    cout<<"memory released\n";
   }
};
int main()
{
    top t;
    t.show();
}