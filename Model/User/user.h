#ifndef USER_H
#define USER_H

#include <string>
#include <iostream>
using namespace std;

class User {
protected:
    static int id;
    string email;
    string password;
    string name;

public:
    User(int id, const string email, const string password);
    virtual ~User(); //Destructor para herencia

    static int getId() const;
    string getEmail() const;
    string getPassword() const;
    string getName() const;

    void setEmail(const string email);
    void setPassword(const string password);
    void setName(const string name);

    virtual string toString() const;
};

#endif // USER_H
