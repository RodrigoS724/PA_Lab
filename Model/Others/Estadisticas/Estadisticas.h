//
// Created by rodrigo724 on 14/06/25.
//

#ifndef ESTADISTICAS_H
#define ESTADISTICAS_H
class Organizacion;

class Estadistica {
private:
    Organizacion* organizacion;

public:
    Estadistica();
    Estadistica(Organizacion* organizacion);
    ~Estadistica();

    Organizacion* getOrganizacion() const;
    void setOrganizacion(Organizacion* organizacion);

    void serviciosMasSolicitados();
    void empleadosMasReservados();
    void serviciosMasReservados();
    void tasaDeCancelacion();
    void calificacionPromedioServicio();
    void calificacionPromedioEmpleado();
};


#endif //ESTADISTICAS_H
