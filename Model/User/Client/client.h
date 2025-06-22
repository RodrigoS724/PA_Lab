//
// Created by rodrigo724 on 14/06/25.
//

#ifndef CLIENT_H
#define CLIENT_H
#include "../user.h"

class Client final : public User {
private:
    string phone;

public:

    Client(const int, const string, const string, const string, const string) ;

    string getPhone() const;

    void setPhone(const string);

    void getInfo() const;
};



#endif //CLIENT_H
