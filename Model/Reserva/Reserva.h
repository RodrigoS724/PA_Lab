//
// Created by rodrigo724 on 14/06/25.
//

#ifndef RESERVA_H
#define RESERVA_H
#include "../../Model/Others/DtDate/dtDate.h"
#include "../../Model/Others/EstadoReserva/EstadoReserva.h"
#include <string>
class Sucursal;

class Reserva {
private:
    DtDate date;
    int id;
    EstadoReserva estado;
    Sucursal* sucursal;

public:
    Reserva();
    Reserva(DtDate date, int id, EstadoReserva estado);
    ~Reserva();

    DtDate getDate() const;
    int getId() const;
    EstadoReserva getEstado() const;
    Sucursal* getSucursal() const;

    void setSucursal(Sucursal* sucursal);

    void tooString() const;
};



#endif //RESERVA_H
