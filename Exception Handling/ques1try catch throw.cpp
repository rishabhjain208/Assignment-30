#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"The value second should not be the '0' '1' '2'\n"<<endl;
    cout<<"Enter the two numbers  = ";
    cin>>a>>b;
    try
    {
        if(b == 0)
        {
            throw" ERROR \n";
        }
        if(b == 1)
        {
            throw b;
        }
        if(b == 2)
        {
            throw exception();
        }
        c = a/b;


    }
    catch(const char *str)
    {
        cout<<str;

    }
    catch(int d)

    {
        cout<<"Error \n";
    }
    catch(...)
    {
        cout<<"Invalid number \n";
    }
    cout<<"Result = "<<c;

    return 0;
}
