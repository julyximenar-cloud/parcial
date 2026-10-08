#include <iostream>

#include "Libro.h"
#include "Biblioteca.h"
#include "Estudiante.h"
#include "Profesor.h"

#include "Auto.h"
#include "Bicicleta.h"
#include "SistemaAlquiler.h"

#include "Producto.h"
#include "CarritoCompras.h"
#include "UsuarioCompras.h"

int main() {

    std::cout << "===== BIBLIOTECA =====" << std::endl;

    Biblioteca biblioteca;

    Libro libro1(
        "Cien años de soledad",
        "Gabriel Garcia Marquez",
        "001"
    );

    Libro libro2(
        "El principito",
        "Antoine de Saint-Exupery",
        "002"
    );

    biblioteca.agregarLibro(libro1);
    biblioteca.agregarLibro(libro2);

    biblioteca.mostrarDisponibles();

    Estudiante estudiante("Ximena");
    Profesor profesor("Carlos");

    estudiante.mostrarInformacion();
    profesor.mostrarInformacion();

    std::cout << "\n===== ALQUILER ====="
              << std::endl;

    SistemaAlquiler sistema;

    Auto auto1(
        "Toyota",
        "Corolla",
        "ABC123",
        5
    );

    Bicicleta bicicleta1(
        "GW",
        "Mountain",
        "B001",
        "Montana"
    );

    sistema.registrarVehiculo(&auto1);
    sistema.registrarVehiculo(&bicicleta1);

    sistema.mostrarDisponibles();

    sistema.alquilarVehiculo("ABC123");

    std::cout << "\nDisponibles despues del alquiler:"
              << std::endl;

    sistema.mostrarDisponibles();

    std::cout << "\n===== CARRITO ====="
              << std::endl;

    Producto producto1(
        "Teclado",
        80000,
        10
    );

    Producto producto2(
        "Mouse",
        50000,
        20
    );

    CarritoCompras carrito;

    carrito.agregarProducto(producto1, 1);
    carrito.agregarProducto(producto2, 2);

    std::cout << "Total: $"
              << carrito.calcularTotal()
              << std::endl;

    UsuarioCompras usuario("Ximena");

    usuario.agregarCompra(
        carrito.calcularTotal()
    );

    usuario.mostrarHistorial();

    return 0;
}
