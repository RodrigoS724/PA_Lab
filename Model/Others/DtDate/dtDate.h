//
// Created by Nicolás on 15/06/25.
//

#ifndef DTDATE_H
#define DTDATE_H

#include <string>

class DtDate
{
private:
    int dia;
    int mes;
    int anio;
    int hora;
    int minuto;

public:
    // Constructor
    DtDate();
    DtDate(int dia, int mes, int anio, int hora, int minuto);

    // Mostrar datos
    std::string toString() const;
};

#endif // DTDATE_H