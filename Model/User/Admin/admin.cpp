//
// Created by rodrigo724 on 14/06/25.
//

#include "admin.h"

#include <utility>

Admin::Admin(int id, string email, string password, string name)
    : User(id, email, password), isAdmin(true), name(std::move(name)){
}

bool Admin::getIsAdmin() const {
    return isAdmin;
}

void Admin::setIsAdmin(bool value) {
    isAdmin = value;
}
