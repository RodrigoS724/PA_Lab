//
// Created by Nico_ on 15/6/2025.
//

#ifndef HORARIO_H
#define HORARIO_H

#include <string>

class Horario
{
private:
    int id;
    int dia;
    string horarioInicio;
    string horarioFin;

public:
    Horario();
    Horario(int id, int dia, string horarioInicio, string horarioFin);
    ~Horario();

    // Getters
    int getId() const;
    int getDia() const;
    string getHorarioInicio() const;
    string getHorarioFin() const;

    // Setters
    void setId(int id);
    void setDia(int dia);
    void setHorarioInicio(string horarioInicio);
    void setHorarioFin(string horarioFin);

    std::string toString() const;
};

#endif // HORARIO_H
