//
// Created by Nicolás on 15/06/25.
//

#ifndef DTDATE_H
#define DTDATE_H

#include <string>

//Se usa struct en lugar de class debido a que solo almacena datos y no incorpora logica compleja
struct DtDate {
private:
    int dia;
    int mes;
    int anio;
    int hora;
    int minuto;

public:
    DtDate();
    DtDate(int dia, int mes, int anio, int hora, int minuto);

    //Getters
    int getDia() const;
    int getMes() const;
    int getAnio() const;
    int getHora() const;
    int getMinuto() const;

    //Setters
    void setDia(int dia);
    void setMes(int mes);
    void setAnio(int anio);
    void setHora(int hora);
    void setMinuto(int minuto);

    void setDate(int dia, int mes, int anio, int hora, int minuto);
    std::string toString() const;
};

#endif //DTDATE_H