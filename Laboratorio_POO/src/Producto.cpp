#include "Producto.h"

Producto::Producto(
    std::string nombre,
    double precio,
    int stock
) {
    this->nombre = nombre;
    this->precio = precio;
    this->stock = stock;
}

std::string Producto::getNombre() const {
    return nombre;
}

double Producto::getPrecio() const {
    return precio;
}

int Producto::getStock() const {
    return stock;
}

void Producto::reducirStock(int cantidad) {
    if (cantidad > 0 && cantidad <= stock) {
        stock -= cantidad;
    }
}
