//
// Created by rodrigo724 on 14/06/25.
//

#ifndef ORGANIZATION_H
#define ORGANIZATION_H
#include <string>
using namespace std;

class Organization {
private:
    int id;
    string name;
    string email;

public:
    Organization();
    Organization(int id, string name, string email);

    int getId() const;
    string getName() const;
    string getEmail() const;
    void setName(const string &name);
    void setEmail(const string &email);

    void getOrganization() const;
};


#endif //ORGANIZATION_H
