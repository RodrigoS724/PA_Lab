#ifndef USER_H
#define USER_H

#include <string>
#include <iostream>
using namespace std;

class User {
protected:
    int id;
    string email;
    string password;
    string name;

public:
    User(int id, const string& email, const string& password);
    virtual ~User(); //Para usar herencia

    int getId() const;
    string getEmail() const;
    string getPassword() const;

    void setEmail(const string& email);
    void setPassword(const string& password);
};

#endif // USER_H
