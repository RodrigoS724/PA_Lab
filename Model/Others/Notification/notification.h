//
// Created by rodrigo724 on 14/06/25.
//

#ifndef Notification_H
#define Notification_H
#include <string>

using namespace std;

class Notification {
protected:
    string message;

public:
    Notification(string message);

    void showMessage();
};



#endif //Notification_H
