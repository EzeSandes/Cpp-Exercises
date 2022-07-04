#include <iostream>

using namespace std;

class Hora
{
    private:
        int horas,
            minutos,
            segundos;

    public:
        Hora(): horas(0), minutos(0), segundos(0) {};
        Hora(int segundos);

        friend ostream& operator << (ostream &sal, const Hora &obj);
        Hora operator + (const Hora &obj);
        Hora& operator ++ ();
};
