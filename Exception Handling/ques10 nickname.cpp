#include<iostream>
#include<string.h>
#include<ctype.h>
using namespace std;
int main()
{
    char name[20];
    cout<<"Enter your nickname ";
    cin>>name;
    int len = strlen(name);

    try{

        if(len>=8)
        {
            throw"Invalid UserName";
        }
        else{
          throw "valid user name";
        }
        for(int i=0; name[i]!='\0'; i++)
        {
            if(isalnum(name[i]))
            {
               throw 'a';
               return 1;
            }
        else{
          throw "Valid user name";
        }
        }
      }
        catch(const char *str)
        {
            cout<<str;
        }
        catch(char a)
        {
            cout<<"Invalid User name must";
        }
        catch(const char *b )
        {
            cout<<b;
        }


    return 0;
}
