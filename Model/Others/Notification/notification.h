//
// Created by rodrigo724 on 14/06/25.
//

#ifndef NOTIFICATIONS_H
#define NOTIFICATIONS_H
#include <string>

using namespace std;

class Notifications {
protected:
    string message;

public:
    Notifications(string message);

    void showMessage();
};



#endif //NOTIFICATIONS_H
