//
// Created by rodrigo724 on 22/06/25.
//

#ifndef EMPLOYEESERVICE_H
#define EMPLOYEESERVICE_H

#include <vector>

#include "../../Model/User/Employee/employee.h"
#include "../../Model/Servicio/Servicio.h"

class EmployeeService {
private:
    vector<pair<Employee*, Servicio*>> employeesServices;
public:
    void asignarRelacion(Employee* empleado, Servicio* servicio);
    void listarServiciosDeEmpleado(Employee* empleado);
    void listarEmpleadosConServicio(Servicio* servicio);
    void eliminarRelacion(Employee* empleado, Servicio* servicio);
    void listarEmpleados();
    void listarServicios();
    void listarRelaciones();


};


#endif //EMPLOYEESERVICE_H
