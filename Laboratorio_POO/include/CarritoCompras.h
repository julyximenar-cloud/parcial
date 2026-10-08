#pragma once

#include <vector>
#include <string>
#include "ItemCarrito.h"

class CarritoCompras {
private:
    std::vector<ItemCarrito> items;

public:
    void agregarProducto(
        Producto producto,
        int cantidad
    );

    void eliminarProducto(
        std::string nombre
    );

    double calcularTotal() const;
};
