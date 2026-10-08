#include "Estudiante.h"
#include <iostream>

Estudiante::Estudiante(std::string nombre)
    : Usuario(nombre, 3) {
}

void Estudiante::mostrarInformacion() const {
    std::cout << "Tipo: Estudiante" << std::endl;
    Usuario::mostrarInformacion();
}
