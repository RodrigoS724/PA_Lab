//
// Created by rodrigo724 on 14/06/25.
//

#ifndef ADMIN_H
#define ADMIN_H
#include "../user.h"
class Organizacion;

class Admin final : public User {
private:
    bool isAdmin;
    Organizacion* organizacion;
public:
    Admin(int id, string email, string password, string name);

    bool getIsAdmin() const;

    Organizacion* getOrganizacion() const;

    void setIsAdmin(bool);
    void setOrganizacion(Organizacion* organizacion);
};

#endif //ADMIN_H
