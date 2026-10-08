#pragma once

#include <vector>
#include <string>
#include "Libro.h"

class Biblioteca {
private:
    std::vector<Libro> libros;

public:
    void agregarLibro(const Libro& libro);
    void eliminarLibro(std::string isbn);

    void buscarPorTitulo(std::string titulo) const;
    void buscarPorAutor(std::string autor) const;

    void mostrarDisponibles() const;
};

