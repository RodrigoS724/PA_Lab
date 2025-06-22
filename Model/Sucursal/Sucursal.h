//
// Created by Nico_ on 15/6/2025.
//

#ifndef SUCURSAL_H
#define SUCURSAL_H

#include <string>

class Sucural
{
private:
    int id;
    string direccion;
    string telefono;

public:
    Sucural();
    Sucural(int id, string direccion, string telefono);
    ~Sucural();

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
