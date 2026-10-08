#pragma once

#include "Producto.h"

class ItemCarrito {
private:
    Producto producto;
    int cantidad;

public:
    ItemCarrito(Producto producto, int cantidad);

    double calcularSubtotal() const;

    std::string getNombreProducto() const;
};
