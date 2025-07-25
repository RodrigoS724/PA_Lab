//
// Created by Nico_ on 15/6/2025.
//

#ifndef CATEGORIA_H
#define CATEGORIA_H

#include <string>

class Categoria {
private:
    int id;
    string titulo;

public:
    Categoria();
    Categoria(int id, string titulo);
    ~Categoria();

    //getters
    int getId() const;
    string getTitulo() const;

    //setters
    void setId(int id);
    void setTitulo(string titulo);

    std::string toString() const;
};

#endif //CATEGORIA_H
