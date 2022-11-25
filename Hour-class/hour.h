#include <iostream>

using namespace std;

class Hour
{
    private:
        int hours,
            minutes,
            seconds;

    public:
        Hour(): hours(0), minutes(0), seconds(0) {};
        Hour(int seconds);

        friend ostream& operator << (ostream &exit, const Hour &obj);
        Hour operator + (const Hour &obj);
        Hour& operator ++ ();
};
