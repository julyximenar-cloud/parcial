#pragma once

#include <string>
#include <vector>

class UsuarioCompras {
private:
    std::string nombre;
    std::vector<double> historialCompras;

public:
    UsuarioCompras(std::string nombre);

    void agregarCompra(double total);

    void mostrarHistorial() const;
};
