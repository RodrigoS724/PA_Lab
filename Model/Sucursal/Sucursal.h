//
// Created by Nico_ on 15/6/2025.
//

#ifndef SUCURSAL_H
#define SUCURSAL_H

#include <string>
#include <vector>
class Organizacion;
class Empleado;

class Sucural
{
private:
    int id;
    string direccion;
    string telefono;
    Organizacion* organizacion;
    vector<Empleado*> empleados;
    vector<Reserva*> reservas;

public:
    Sucural();
    Sucural(int id, string direccion, string telefono);
    ~Sucural();

    Organizacion* getOrganizacion() const;
    const vector<Empleado*>& getEmpleados() const;
    const std::vector<Reserva*>& getReservas() const;

    void agregarReserva(Reserva* reserva);
    void setOrganizacion(Organizacion* organizacion);
    void agregarEmpleado(Empleado* empleado);


    void addServicio(Servicio *s);
    const vector<Servicio *> getServicios();

    // Getters
    int getId() const;
    string getDireccion() const;
    string getTelefono() const;

    // Setters
    void setId(int id);
    void setDireccion(string direccion);
    void setTelefono(string telefono);

    std::string toString() const;
};

#endif // SUCURSAL_H
