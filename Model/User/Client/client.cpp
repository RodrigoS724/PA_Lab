//
// Created by rodrigo724 on 14/06/25.
//

#include "client.h"

Client::Client(int id, string email, string pass, string name, string phone)
    : User(id, email, pass), name(name), phone(phone) {}

string Client::getName() const {
    return name;
}

string Client::getPhone() const {
    return phone;
}

void Client::setName(const string& name) {
    name = name;
}

void Client::setPhone(const string& phone) {
    phone = phone;
}

void Client::getInfo() const {
    cout << "ID: " << id << endl;
    cout << "Correo: " << email << endl;
    cout << "Nombre: " << name << endl;
    cout << "Teléfono: " << phone << endl;
}
