//
// Created by rodrigo724 on 14/06/25.
//

#include "userController.h"

#include <iostream>

using namespace std;

UserController::~UserController() {
    for (User* user : users) {
        delete user;
    }
    users.clear();
}

void UserController::addUser(User* user) {
    users.push_back(user);
    cout << "Usuario Agregado.\n";
}

bool UserController::removeUserById(int id) {
    for (auto it = users.begin(); it != users.end(); ++it) {
        if ((*it)->getId() == id) {
            delete *it;
            users.erase(it);
            cout << "Usuario borrado.\n";
            return true;
        }
    }
    cout << "Usuario no encontrado.\n";
    return false;
}

bool UserController::updateUserEmail(int id, const string& newEmail) {
    for (User* user : users) {
        if (user->getId() == id) {
            user->setCorreo(newEmail);
            cout << "Email cambiado.\n";
            return true;
        }
    }
    cout << "Usuario no encontrado.\n";
    return false;
}

void UserController::listUsers() const {
    if (users.empty()) {
        cout << "No users registered.\n";
        return;
    }

    cout << "=== Registered Users ===" << endl;
    for (User* user : users) {
        cout << "ID: " << user->getId() << ", Email: " << user->getCorreo() << endl;

        if (Admin* admin = dynamic_cast<Admin*>(user)) {
            cout << "-> Type: Admin | isAdmin: " << (admin->getIsAdmin() ? "true" : "false") << endl;
        } else if (client* c = dynamic_cast<client*>(user)) {
            cout << "-> Type: Client | Name: " << c->getName() << ", Phone: " << c->getPhone() << endl;
        }

        cout << "-----------------------------" << endl;
    }
}
