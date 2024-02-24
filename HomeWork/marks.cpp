#include<iostream>
using namespace std;
 int main(){
//     int phy,chem,maths;
//     cout<<"enter the physics number: ";
//     cin>>phy;
//     cout<<"enter the chem number: ";
//     cin>>chem;
//     cout<<"enter the maths number: ";
//     cin>>maths;
//     int total = phy+chem+maths;
//     float Per= (phy+chem+maths)/3;
//     cout<<"Total marks: "<<total;
//     cout<<"Percentage is: "<<Per<<"%\n";
//     if(Per<35)
//     {
//         cout<<"fail";
//     }
//     else if(Per>35 && Per<49)
//     {
//         cout<<"third division";
//     }
//     else if(Per>50 && Per<59)
//     {
        
//         cout<<"second division";
//     }
//     else if(Per>60 && Per<100)
//     {
//         cout<<"First division";
        
//     }
//     return 0;
// }



int phy,chem,maths;
cout<<"enter the phy number:";
cin>>phy;
cout<<"enter the chem number:";
cin<<chem;
cout<<"enter the maths number:";
cin>>maths;
int total = phy+chem+maths;
cout<<"total number of subject is: "<<total;
float per = (phy+chem+maths)/3;
cout<<"total percentage of subject is :"<<per<<"%\n";
if(per<35)
{
 
    cout<<"fail"
 }
 else if(per>35 && per<49)
 {
     cout<<"third division";
 }
 else if(per>49 && per<59)
 {
    cout<<"second division";
 }
 else if(per>60 && per<100)
 {
    cout<<"first division"
 }
 return 0;

}
 





