//
// Created by rodrigo724 on 22/06/25.
//

#ifndef SERVICIOORGANIZACION_H
#define SERVICIOORGANIZACION_H
#include <vector>

#include "../../Model/Organization/organization.h"
#include "../../Model/Servicio/Servicio.h"


class Servicio_Organizacion {
private:
    Organization* organization;
    vector<Servicio*> servicios;

public:
    Servicio_Organizacion(Organization* organization, vector<Servicio*> servicios);
    ~Servicio_Organizacion();

    void listarServiciosDeOrganizacion(const Organization*);

};


#endif //SERVICIOORGANIZACION_H
