//
// Created by Nico_ on 15/6/2025.
//

#ifndef HORARIO_H
#define HORARIO_H

#include <string>
class Empleado;

class Horario
{
private:
    int id;
    int dia;
    string horarioInicio;
    string horarioFin;

    //Relacion 1 a 1
    Empleado* empleado;

public:
    Horario();
    Horario(int id, int dia, string horarioInicio, string horarioFin, Empleado* empleado);
    ~Horario();

    // Getters
    int getId() const;
    int getDia() const;
    string getHorarioInicio() const;
    string getHorarioFin() const;
    Empleado* getEmpleado() const;

    // Setters
    void setId(int id);
    void setDia(int dia);
    void setHorarioInicio(string horarioInicio);
    void setHorarioFin(string horarioFin);
    void setEmpleado(Empleado* empleado);

    std::string toString() const;
};

#endif // HORARIO_H
