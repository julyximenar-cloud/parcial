cmake_minimum_required(VERSION 3.10)

project(LaboratorioPOO)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

add_executable(laboratorio
    src/main.cpp

    src/Libro.cpp
    src/Biblioteca.cpp

    src/Usuario.cpp
    src/Estudiante.cpp
    src/Profesor.cpp

    src/Vehiculo.cpp
    src/Auto.cpp
    src/Bicicleta.cpp
    src/SistemaAlquiler.cpp

    src/Producto.cpp
    src/ItemCarrito.cpp
    src/CarritoCompras.cpp
    src/UsuarioCompras.cpp
)
