//
// Created by rodrigo724 on 14/06/25. // Modificada 21/06 Nico
//

#ifndef EMPLEADO_H
#define EMPLEADO_H

#include "../user.h"
#include <string>
class Horario;
class Sucursal;

class Empleado final : public User {
private:
    Horario* horario; //relacion con horario 1 a 1
    Sucursal* sucursal;

public:
    // Constructor
    Empleado();
    Empleado(int id, const std::string& email, const std::string& password, const std::string& name, Horario* horario);

    // Destructor
    ~Empleado() override;

    // Métodos específicos get y set
    void setHorario(Horario* horario);
    void setSucursal(Sucursal* sucursal);

    Horario* getHorario() const;
    Sucursal* getSucursal() const;


    void displayInfo() const;
};

#endif // EMPLEADO_H
