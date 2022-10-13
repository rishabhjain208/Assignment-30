#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int num;
    int i,count = 0;
    cout<<"Enter your mobile number = ";
    cin>>num;
   try
    {
        while(num)
        {
            num = num/10;
            count++;
        }

        if(count != 10)
            throw 1;
        else
            throw 2;
    }
    catch(int a)
        {

            cout<<"Your Mobile number is Invalid ";
        }
        catch(int b)
        {
            cout<<"Your Mobile number is valid ";
        }

 return 0;
}
