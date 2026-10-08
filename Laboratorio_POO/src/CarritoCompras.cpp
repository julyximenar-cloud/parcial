#include "CarritoCompras.h"

void CarritoCompras::agregarProducto(
    Producto producto,
    int cantidad
) {
    if (cantidad > 0 && cantidad <= producto.getStock()) {
        ItemCarrito item(producto, cantidad);
        items.push_back(item);
    }
}

void CarritoCompras::eliminarProducto(
    std::string nombre
) {

    for (int i = 0; i < items.size(); i++) {

        if (items[i].getNombreProducto() == nombre) {

            items.erase(items.begin() + i);
            return;
        }
    }
}

double CarritoCompras::calcularTotal() const {

    double total = 0;

    for (const ItemCarrito& item : items) {
        total += item.calcularSubtotal();
    }

    return total;
}
