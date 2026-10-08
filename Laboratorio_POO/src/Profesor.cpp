#include "Profesor.h"
#include <iostream>

Profesor::Profesor(std::string nombre)
    : Usuario(nombre, 5) {
}

void Profesor::mostrarInformacion() const {
    std::cout << "Tipo: Profesor" << std::endl;
    Usuario::mostrarInformacion();
}
