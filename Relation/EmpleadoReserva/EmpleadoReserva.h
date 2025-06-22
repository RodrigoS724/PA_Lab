//
// Created by Nico_ on 22/6/2025.
//

#ifndef EMPLEADORESERVA_H
#define EMPLEADORESERVA_H
#include <utility>
#include <vector>


class EmpleadoReserva {
private:
    vector<pair<Employee*, Reserva*>> empleadoReservas;

public:
    void asignarReserva(Employee* empleado, Reserva* reserva);
    void listarReservasDeEmpleado(Employee* empleado);
    void listarEmpleadosConReserva(Reserva* reserva);
    void eliminarReserva(Employee* empleado, Reserva* reserva);
};



#endif //EMPLEADORESERVA_H
