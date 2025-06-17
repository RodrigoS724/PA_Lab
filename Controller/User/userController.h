//
// Created by rodrigo724 on 14/06/25.
//

#ifndef USER_H
#define USER_H

#include <vector>
#include "../../Model/User/user.h"
#include "../../Model/User/Admin/admin.h"
#include "../../Model/User/Client/client.h"

class UserController {
private:
    std::vector<User*> users;

public:
    ~UserController(); // Destructor

    void addUser(User* user);
    bool removeUserById(int id);
    bool updateUserEmail(int id, const std::string& newEmail);
    void listUsers() const;
};

#endif //USER_H
