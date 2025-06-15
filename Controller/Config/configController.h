//
// Created by rodrigo724 on 14/06/25.
//

#ifndef CONFIG_H
#define CONFIG_H
#include <string>

using namespace std;

class configController {
    private:
        string lenguage;
        bool darkMode;

    public:
        string setLenguage(string);
        bool setDarkMode(bool);
        void getConfig();
};

#endif //CONFIG_H
