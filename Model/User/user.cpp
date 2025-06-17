//
// Created by rodrigo724 on 14/06/25.
//

#include "user.h"

User::User(int id, const string& email, const string& password)
    : id(id), email(email), password(password) {}

User::~User() {}

int User::getId() const {
    return id;
}

string User::getEmail() const {
    return email;
}

string User::getPassword() const {
    return password;
}

void User::setEmail(const string& newEmail) {
    email = newEmail;
}

void User::setPassword(const string& newPassword) {
    password = newPassword;
}
