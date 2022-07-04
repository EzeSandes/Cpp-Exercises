#include <iostream>

using namespace std;

class HoraExc : public exception
{
    private:
        string  mensaje;

    public:
        HoraExc(const string &msj = "ERROR -- HoraExc") : mensaje(msj){};

        const char* what() { return this->mensaje.c_str();};
};
