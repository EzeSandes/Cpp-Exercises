#include <string.h>
#include "String.h"

String::String()
{
    this->str = new char[1];
    this->str[0] = '\0';
    // *this->str = '\0';
}

String::~String()
{
    // We use dynamic memory, so we have to have a destructor.
    delete [] this->str;
}

String :: String(const char *str)
{
    this->str = new char[strlen(str + 1)];
    strcpy(this->str, str);
}

String :: String(char *c)
{
    this->str = c;
}

String :: String(const String &obj)
{
    this->str = new char[strlen(obj.str) + 1];
    strcpy(this->str, obj.str);
}

String :: String(const string &str)
{
    this->str = new char[str.length() + 1];
    strcpy(this->str, str.c_str());
}
/////////////////

String& String :: operator = (const String &obj)
{
    size_t newLength = strlen(obj.str);

    if(newLength != strlen(this->str))
    {
        delete [] this->str;
        this->str = new char [newLength + 1];
    }

    strcpy(this->str, obj.str);

    return *this;
}

///////

String& String :: operator += (const String &obj)
{
    char *newStr = new char[strlen(this->str) + strlen(obj.str) + 1];

    strcpy(newStr, this->str);
    strcat(newStr, obj.str);

    delete [] this->str;
    this->str = newStr;

    return *this;
}

/////////

int String :: operator == (const String &obj)
{
    return strcmp(this->str, obj.str);
}

/////////

ostream& operator << (ostream& sal, const String &str)
{
    return sal << str.str;
}

istream& operator >> (istream& ent, String &str)
{

}
/////////
/////////
/////////
