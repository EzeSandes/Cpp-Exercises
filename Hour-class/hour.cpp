#include "Hour.h"
#include "HourExc.h"


Hour::Hour(int seconds)
{
    if(seconds < 0)
        throw HourExc("ERROR -- negative seconds.");

    seconds %= 60 * 60 * 24;

    this->hours = seconds / 3600;
    this->minutes = (seconds % 3600) / 60;
    this->seconds = (seconds % 3600) % 60;
}

ostream& operator << (ostream &exit, const Hour &obj)
{
    return exit << obj.hours << ":" << obj.minutes << ":" << obj.seconds;
}

////////////////////////////////

Hour Hour :: operator + (const Hour &obj)
{
    int totalNumSeconds = (this->hours + obj.hours) * 3600 +
                    (this->minutes + obj.minutes) * 60 +
                    this->seconds + obj.seconds;

    return Hour(totalNumSeconds);
}

////////////////////////////////

Hour& Hour :: operator ++ ()
{
    return *this = Hour(this->hours * 3600 + this->minutes * 60 + this->seconds + 1);
}

////////////////////////////////
