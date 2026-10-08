#include "ItemCarrito.h"

ItemCarrito::ItemCarrito(
    Producto producto,
    int cantidad
)
    : producto(producto) {

    this->cantidad = cantidad;
}

double ItemCarrito::calcularSubtotal() const {
    return producto.getPrecio() * cantidad;
}

std::string ItemCarrito::getNombreProducto() const {
    return producto.getNombre();
}
