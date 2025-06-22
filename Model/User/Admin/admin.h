//
// Created by rodrigo724 on 14/06/25.
//

#ifndef ADMIN_H
#define ADMIN_H
#include "../user.h"

class Admin final : public User {
private:
    bool isAdmin;
public:
    Admin(int id, string email, string password, string name);

    bool getIsAdmin() const;

    void setIsAdmin(bool);
};

#endif //ADMIN_H
