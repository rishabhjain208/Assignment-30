#include<iostream>
#include<regex>
using namespace std;
bool gmail(char *email)
{
     const regex pattern("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");
    return regex_match(email,pattern);
}
bool ischeckemail(char *email)
{
    char a[] = {"gmail.com"};
    int i;
    int atoffset = -1;
    int gmoffset = -1;
    int count = 0;
    for(i = 0; email[i]!= '\0'; i++)
    {

        if(email[i] == '@')
            atoffset = i;
         else if(gmail(email))
            gmoffset = i;

            count++;
    }
    if(atoffset == -1 || gmoffset == -1)
        return 0;
    if(atoffset > gmoffset)
        return 0;
      //  return!(gmoffset >= (count-1));
}
int main()
{

    char email[20];
    cout<<"Enter your Email Address \n";
    cin.get(email,20);
    try{

        if(ischeckemail(email))
        {
        throw "Valid Email Address";
        }
        else
        {
        throw 'c';

        }
    }
    catch(const char *str)
    {
        cout<<str;
    }
    catch(char c)
    {
        cout<<"Invalid Email Address";
    }
    catch(...)
    {
        cout<<"Exception Caught";
    }
    return 0;
}
