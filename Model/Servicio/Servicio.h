//
// Created by Nico_ on 15/6/2025.
//

#ifndef SERVICIO_H
#define SERVICIO_H

#include <string>

class Servicio
{
private:
    int id;
    string nombre;
    string descripcion;
    int duracion;
    float precio;

public:
    Servicio();
    Servicio(int id, string nombre, string descripcion, int duracion, float precio);
    ~Servicio();

    // getters
    int getId() const;
    string getNombre() const;
    string getDescripcion() const;
    int getDuracion() const;
    float getPrecio() const;

    // Setters
    void setId(int id);
    void setNombre(string nombre);
    void setDescripcion(string descripcion);
    void setDuracion(int duracion);
    void setPrecio(float precio);

    std::string toString() const;
};

#endif // SERVICIO_H
