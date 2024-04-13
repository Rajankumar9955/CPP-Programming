// #include<iostream>
// using namespace std;
//  int main(){
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


#include<iostream>
using namespace std;
int main()
{
int hindi,math,science,sscience,sanskrit;
cout<<"Enter the Hindi Marks Please:";
cin>>hindi;
cout<<"Enter the Math Marks Please:";
cin>>math;
cout<<"Enter the Science Marks Please:";
cin>>science;
cout<<"Enter the Social-Science Marks Please:";
cin>>sscience;
cout<<"Enter the Sanskrit Marks Please:";
cin>>sanskrit;
int total=hindi+math+science+sscience+sanskrit;
float per=(hindi+math+science+sscience+sanskrit)/5;
cout<<"Total Marks:="<<total<<"\n";
cout<<"Percentage Of Marks:"<<per<<"%\n";
  if(hindi<33 && math<33)
   {
      cout<<"Your are fail in Hindi\n";
      cout<<"Your are also fail in Maths\n";
   }
   else if(hindi<33 && science<33)
   {
      cout<<"Your are fail in Hindi\n";
      cout<<"Your are also fail in Science\n";
   }
   else if(hindi<33 && sscience<33)
   {
      cout<<"Your are fail in Hindi\n";
      cout<<"Your are also fail in Social-Science\n";
   }
   else if(hindi<33 && sanskrit<33)
   {
      cout<<"Your are fail in Hindi\n";
      cout<<"Your are also fail in Sanskrit\n";
   }
   else if(math<33 && hindi<33)
   {
      cout<<"Your are fail in Maths\n";
      cout<<"Your are also fail in Hindi\n";
   }
   else if(math<33 && science<33)
   {
      cout<<"Your are fail in Maths\n";
      cout<<"Your are also fail in Science\n";
   }
   else if(math<33 && sscience<33)
   {
      cout<<"Your are fail in Maths\n";
      cout<<"Your are also fail in Social-Science\n";
   }
   else if(math<33 && sanskrit<33)
   {
      cout<<"Your are fail in Maths\n";
      cout<<"Your are also fail in sankrit\n";
   }
   else if(science<33 && hindi<33)
   {
      cout<<"Your are fail in Science\n";
      cout<<"Your are also fail in Hindi\n";
   }
    else if(science<33 && math<33)
   {
      cout<<"Your are fail in Science\n";
      cout<<"Your are also fail in Maths\n";
   }
    else if(science<33 && sscience<33)
   {
      cout<<"Your are fail in Science\n";
      cout<<"Your are also fail in Social-Science\n";
   }
    else if(science<33 && sanskrit<33)
   {
      cout<<"Your are fail in Science\n";
      cout<<"Your are also fail in Sanskrit\n";
   }
    else if(sscience<33 && hindi<33)
   {
      cout<<"Your are fail in Social-Science\n";
      cout<<"Your are also fail in Hindi\n";
   }
    else if(sscience<33 && math<33)
   {
      cout<<"Your are fail in Social-Science\n";
      cout<<"Your are also fail in Maths\n";
   }
    else if(sscience<33 && science<33)
   {
      cout<<"Your are fail in Social-Science\n";
      cout<<"Your are also fail in Science\n";
   }
    else if(sscience<33 && sanskrit<33)
   {
      cout<<"Your are fail in Social-Science\n";
      cout<<"Your are also fail in Sanskrit\n";
   }
    else if(sanskrit<33 && hindi<33)
   {
      cout<<"Your are fail in Sanskrit\n";
      cout<<"Your are also fail in Hindi\n";
   }
    else if(sanskrit<33 && math<33)
   {
      cout<<"Your are fail in Sanskrit\n";
      cout<<"Your are also fail in Maths\n";
   }
   else if(sanskrit<33 && science<33)
   {
      cout<<"Your are fail in Sanskrit\n";
      cout<<"Your are also fail in Science\n";
   }
   else if(sanskrit<33 && sscience<33)
   {
      cout<<"Your are fail in Sanskrit\n";
      cout<<"Your are also fail in Social-Science\n";
   }
   else if(hindi<33)
  {
   cout<<"Your are fail in Hindi:\n";
  }
  else if(math<33)
  {
   cout<<"You are fail in Maths:\n";
  }
  else if(science<33)
  {
   cout<<"Your are fail in Science:\n";
  }
  else if(sscience<33)
  {
   cout<<"Your are fail in social-Science:\n";
  }
  else if(sanskrit<33)
  {
   cout<<"Your are fail in Sanskrit:\n";
  }
   else if(per<33)
   {
   cout<<"Your are Fail:\n";
   }
  
   else if(per>33 && per<49)
   {
      cout<<"Third Division\n";
   }
   else if(per>50 && per<59)
   {
      cout<<"Second Division\n";
   }
   else if(per>60 && per<=100)
   {
      cout<<"First Division\n";
   }
}






