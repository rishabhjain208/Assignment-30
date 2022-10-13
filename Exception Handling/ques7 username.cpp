#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char name[10];
    int i,check = -1;
    cout<<"Enter your UserName ";
    cin>>name;
    try{

        if(strlen(name)!=6)
            throw "Invalid UserName because UserName must be contain 6 character ";
        for(i = 0; name[i]!='\0'; i++)
        {
        if (name[i] == '0' ||name[i] == '1' ||name[i] == '2' ||name[i] == '3' ||name[i] == '4' ||name[i] == '5' ||name[i] == '6' ||name[i] == '7' ||name[i] == '8' ||name[i] == '9' )
            check = 1;
        }
        if(check == -1)
        throw "Invalid UserName because UserName must be contain any one digit(0-9)";
        else
           throw "valid UserName";
      }
      catch(const char *str)
      {
          cout<<str;
      }
      catch(const char *s)
      {
          cout<<s;
      }
      catch(const char *ss)
      {
          cout<<ss;
      }
      return 0;
}

