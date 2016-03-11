#include "contact.h"
#include<ctype.h>
#include<stdlib.h>
#include<string>
#include<iostream>
using namespace std;

bool Contact::isValidToAdd() const
{
    /*
    Adding a new contact requires:
    -first name
    -last name
    -phone number
    */

 //int phno = atoi(phoneNumber.c_str());

    bool hasNames = !(firstName.empty() || lastName.empty() || address.empty());

    if(hasNames && !phoneNumber.empty() && !email.empty())

    {
        return true;
    }
    else
    {
        return false;
    }

}
bool Contact::isValidPhoneNo() const
{
     /*int phno=atoi(phoneNumber.c_str());
     if(isdigit(phno))
     {
         return true;
     }
     else
     {
         return false;
     }*/
    int i,flag=0;
    for( i=0;i<=phoneNumber.length();i++)
    {
        if(phoneNumber[i]>='0' && phoneNumber[i]<='9')
        {
            flag=1;
            break;
        }

    }
    if(flag == 1 && phoneNumber.length() == 10)
        return true;
    else
        return false;
}
bool Contact::isValidEmail() const
{
 int pos_at=email.find('@');
 int pos_dot=email.find('.');
 if(pos_at >=0 && pos_dot >=0)
 return true;
 else
 return false;

}

bool Contact::isEmpty() const
{
    if(firstName.empty() && 
        lastName.empty() &&
        phoneNumber.empty() && 
        address.empty() && 
        email.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}
    
