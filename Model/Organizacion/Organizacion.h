//
// Created by rodrigo724 on 14/06/25.
//

#ifndef ORGANIZACION_H
#define ORGANIZACION_H
#include <string>
#include <vector>
using namespace std;
class Administrador;
class Estadistica;
class Sucursal;

class Organizacion {
private:
    int id;
    string name;
    string email;
    Administrador* administrador;
    Estadistica* estadistica;
    vector<Sucursal*> sucursales;

public:
    Organizacion();
    Organizacion(int id, string name, string email, Administrador* administrador);
    ~Organizacion();

    int getId() const;
    string getName() const;
    string getEmail() const;
    Administrador* getAdministrador() const;
    Estadistica* getEstadistica() const;
    const std::vector<Sucursal*>& getSucursales() const;

    void setName(const string &name);
    void setEmail(const string &email);
    void setAdministrador(Administrador* administrador);
    void setEstadistica(Estadistica* estadistica);
    void agregarSucursal(Sucursal* sucursal);

    string toString() const;
};


#endif //ORGANIZACION_H
