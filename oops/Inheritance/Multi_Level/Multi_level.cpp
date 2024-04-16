class reward
{
    protected:void virus()
    {
      cout<<"Ur system got hacked"<<"\n";
    }
};
class sbi:public reward
{
    public:void prize()
    {
        virus();
          cout<<"$2000000"<<"\n";
    }
};
class  
int main()
{
    sbi r;
    r.prize();
}