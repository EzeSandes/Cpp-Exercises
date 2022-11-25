#include <iostream>

using namespace std;

class String
{
    private:
        char    *str;

    public:
        String();
        ~String();
        String(const char *str);
        String(char *c);
        String(const String &obj);
        String(const string &str);


        // OPERATORS
        String& operator = (const String &obj);
        String& operator += (const String &obj);
        int operator == (const String &obj);

        // FRIENDS
        friend ostream& operator << (ostream& sal, const String &str);
        friend istream& operator >> (istream& ent, String &str);
};
