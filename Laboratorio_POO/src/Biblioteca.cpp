#include "Biblioteca.h"
#include <iostream>

void Biblioteca::agregarLibro(const Libro& libro) {
    libros.push_back(libro);
}

void Biblioteca::eliminarLibro(std::string isbn) {

    for (int i = 0; i < libros.size(); i++) {

        if (libros[i].getIsbn() == isbn) {
            libros.erase(libros.begin() + i);

            std::cout << "Libro eliminado." << std::endl;
            return;
        }
    }

    std::cout << "Libro no encontrado." << std::endl;
}

void Biblioteca::buscarPorTitulo(std::string titulo) const {

    for (const Libro& libro : libros) {

        if (libro.getTitulo() == titulo) {
            libro.mostrarInformacion();
            std::cout << std::endl;
        }
    }
}

void Biblioteca::buscarPorAutor(std::string autor) const {

    for (const Libro& libro : libros) {

        if (libro.getAutor() == autor) {
            libro.mostrarInformacion();
            std::cout << std::endl;
        }
    }
}

void Biblioteca::mostrarDisponibles() const {

    std::cout << "LIBROS DISPONIBLES" << std::endl;

    for (const Libro& libro : libros) {

        if (libro.estaDisponible()) {
            libro.mostrarInformacion();
            std::cout << std::endl;
        }
    }
}
