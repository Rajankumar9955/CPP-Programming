// WAP to print accending order to given number

int main(){
    int a[]={100,2,98,77,6};
    int t,n;
     n= sizeof (a)/sizeof (a[0]);
    for(int i=0; i<n; ++i)
    {
        for(int j=0; j<n-i-1; ++j)
        {
            if (a[j]>a[j+1])
            {
                t=a[j+1];
                a[j+1]=a[j];
                a[j]=t;
            }
        }    
    }      
    for(int k=0; k<n;++k)
    {
        cout<<a[k]<<"\n";
    }
}



