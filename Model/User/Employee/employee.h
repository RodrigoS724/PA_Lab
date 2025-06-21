//
// Created by rodrigo724 on 14/06/25. // Modificada 21/06 Nico
//

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "../user.h"

class Employee final : public User {
private:
    string position;
    double salary;        // Salario del empleado

public:
    // Constructor
    Employee(int id, const std::string& email, const std::string& password, const std::string& name, const std::string& position, double salary);

    // Destructor
    ~Employee() override;

    // Métodos específicos get y set
    string getPosition() const;
    double getSalary() const;

    void setPosition(const string& position);
    void setSalary(double salary);

    void displayInfo() const;
};

#endif // EMPLOYEE_H
