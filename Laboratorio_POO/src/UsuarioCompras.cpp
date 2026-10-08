#include "UsuarioCompras.h"
#include <iostream>

UsuarioCompras::UsuarioCompras(std::string nombre) {
    this->nombre = nombre;
}

void UsuarioCompras::agregarCompra(double total) {
    historialCompras.push_back(total);
}

void UsuarioCompras::mostrarHistorial() const {

    std::cout << "Historial de compras de "
              << nombre << std::endl;

    for (double compra : historialCompras) {
        std::cout << "$" << compra << std::endl;
    }
}
