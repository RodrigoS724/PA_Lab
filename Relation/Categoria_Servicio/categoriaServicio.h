//
// Created by rodrigo724 on 22/06/25.
//

#ifndef CATEGORIASERVICIO_H
#define CATEGORIASERVICIO_H
#include <vector>


class CategoriaServicio {
private:
    std::vector<std::pair<Categoria*, Servicio*>> categoriasServicios;  // el servicio debe ser al menos 1

public:
    void asignarRelacion(Categoria* categoria, Servicio* servicio);
    void listarServiciosDeCategoria(Categoria* categoria);
    void listarCategoriasConServicio(Servicio* servicio);
    void eliminarRelacion(Categoria* categoria, Servicio* servicio);
};



#endif //CATEGORIASERVICIO_H
