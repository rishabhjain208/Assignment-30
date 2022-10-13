#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int num;
    int i,count = 0;
    cout<<"Enter your area pin code number = ";
    cin>>num;
   try
    {
        while(num)
        {
            num = num/10;
            count++;
        }

        if(count == 6)
            throw "Your area pin code number is valid ";
        else
            throw "Your area pin code number is invalid ";
    }
    catch(const char *a)
        {

            cout<<a;
        }
        catch(const char *b)
        {
            cout<<b;
        }

 return 0;
}

