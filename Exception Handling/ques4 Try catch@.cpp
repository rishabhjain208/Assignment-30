#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;
bool checkemail(char *email)
{
    int atoffset = -1;
    int dotoffset = -1;
    int i,count = 0 ;
    for(i = 0; email[i] != '\0'; i++)
    {
        if(email[i] == '@')
            atoffset = i;
        else if(email[i] == '.')
            dotoffset = i;


            count++;

    }
    if(atoffset == -1 || dotoffset == -1)
            return 0;
     if(atoffset > dotoffset)
        return 0;
    return!(dotoffset >= (count-1));
}
int main()
{
    char email[100];
    cout<<"Enter the Your email address = ";
    cin.get(email,100);
    try
    {
        if(checkemail(email))
        {
            throw "email address is valid \n";
        }
        else
        {
            throw'c';
        }

    }catch(const char *str)
    {
        cout<<str;
    }
    catch(char c)
    {
        cout<<"Exception caught..............\n invalid email address";

    }
    catch(...)
    {

        cout<<"Default Exception\n";
    }
    //cout<<"\nEntered email address is = "<<email<<endl;
    return 0;
}
