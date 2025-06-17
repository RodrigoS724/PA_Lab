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
    string horario_inicio;
    string horario_fin;

public:
    Horario();
    Horario(int id, int dia, string horarioIni, string horarioFin);

    // Getters
    int getId() const;
    int getDia() const;
    string getHorarioIni() const;
    string getHorarioFin() const;

    // Setters
    void setId(int id);
    void setDia(int dia);
    void setHorarioIni(string horarioIni);
    void setHorarioFin(string horarioFin);

    std::string toString() const;
};

#endif // HORARIO_H
