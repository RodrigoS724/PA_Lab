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

    Client(int, string, string, string, string);

    string getPhone() const;

    static void setPhone(const string &phone);

    void getInfo() const;
};



#endif //CLIENT_H
