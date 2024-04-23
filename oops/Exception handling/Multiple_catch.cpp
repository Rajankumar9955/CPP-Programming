#include<iostream>
using namespace std;
int main()
{
    try
    {
        // throw 20;
        throw 1.1;
        // throw 1.2f;
        // throw 'R';
        // throw "Wel-come buddy!";
    }
    catch(int r)
    {
        cout<<"int type\n"<<r;
    }
    catch(double r)
    {
        cout<<"double type\n"<<r;

    }
    catch(float r)
    {
        cout<<"float type\n"<<r;
    }
    catch(char r)
    {
        cout<<"char type\n"<<r;
    }
    catch(const char *r)
    {
        cout<<"string type\n"<<r;
    }
    cout<<"\ndone";
}