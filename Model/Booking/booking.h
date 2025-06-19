//
// Created by rodrigo724 on 14/06/25.
//

#ifndef BOOKING_H
#define BOOKING_H
#include "../../Model/Others/DtDate/dtDate.h"
#include "../../Model/Others/EstadoReserva/EstadoReserva.h"

class Booking {
private:
    DtDate date;
    int id;
    EstadoReserva estado;

public:
    Booking(DtDate date, int id, EstadoReserva estado);

    DtDate getDate() const;
    int getId() const;
    EstadoReserva getEstado() const;

    void tooString() const;
};



#endif //BOOKING_H
