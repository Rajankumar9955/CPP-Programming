 #include<iostream>
 using namespace std;
 void show()
 {
    cout<<"hello\t";
 }
 void sum(int a,int b)//formal parameter//parameter
 {
    cout<<a+b<<"\n";
 }
 int main()
 {
/*for(int i=0;i<=10;++i)
{
    show();
}*/
int a1,b1;
cout<<"enter two number\n";
cin>>a1>>b1;
sum(a1,b1);//call by value//actual parameter/argument


 }