#include "Libro.h"
#include <iostream>

Libro::Libro(std::string titulo, std::string autor, std::string isbn) {
    this->titulo = titulo;
    this->autor = autor;
    this->isbn = isbn;
    disponible = true;
}

std::string Libro::getTitulo() const {
    return titulo;
}

std::string Libro::getAutor() const {
    return autor;
}

std::string Libro::getIsbn() const {
    return isbn;
}

bool Libro::estaDisponible() const {
    return disponible;
}

void Libro::prestar() {
    if (disponible) {
        disponible = false;
    }
}

void Libro::devolver() {
    disponible = true;
}

void Libro::mostrarInformacion() const {
    std::cout << "Titulo: " << titulo << std::endl;
    std::cout << "Autor: " << autor << std::endl;
    std::cout << "ISBN: " << isbn << std::endl;

    if (disponible) {
        std::cout << "Estado: Disponible" << std::endl;
    } else {
        std::cout << "Estado: Prestado" << std::endl;
    }
}
