#include "Hora.h"
#include "HoraExc.h"


Hora::Hora(int segundos)
{
    if(segundos < 0)
        throw HoraExc("ERROR -- Segundos negativos.");

    segundos %= 60 * 60 * 24;

    this->horas = segundos / 3600;
    this->minutos = (segundos % 3600) / 60;
    this->segundos = (segundos % 3600) % 60;
}

ostream& operator << (ostream &sal, const Hora &obj)
{
    return sal << obj.horas << ":" << obj.minutos << ":" << obj.segundos;
}

////////////////////////////////

Hora Hora :: operator + (const Hora &obj)
{
    int cantSegTot = (this->horas + obj.horas) * 3600 +
                    (this->minutos + obj.minutos) * 60 +
                    this->segundos + obj.segundos;

    return Hora(cantSegTot);
}

////////////////////////////////

Hora& Hora :: operator ++ ()
{
    return *this = Hora(this->horas * 3600 + this->minutos * 60 + this->segundos + 1);
}

////////////////////////////////
