//
// Created by rodrigo724 on 22/06/25.
//

#ifndef RESERVACLIENTE_H
#define RESERVACLIENTE_H
#include <vector>

#include "../../Model/User/Client/client.h"
#include "../../Model/Reserva/Reserva.h"

class ReservaCliente {
private:
    Client* cliente;
    vector<Reserva*> reservas;

public:
    ReservaCliente(Client* cliente, vector<Reserva*> reservas);
    ~ReservaCliente();

    Client* getClient() const;
    const vector<Reserva*>& getReservas() const;

    void listarReservasDeCliente(Client* cliente);
    void eliminarReserva(Client* cliente, Reserva* reserva);
    void agregarReserva(Client* cliente, Reserva* reserva);
};



#endif //RESERVACLIENTE_H
