#include "Usuario.h"
#include <iostream>

Usuario::Usuario(std::string nombre, int limitePrestamos) {
    this->nombre = nombre;
    this->limitePrestamos = limitePrestamos;
}

void Usuario::mostrarInformacion() const {
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Limite de prestamos: "
              << limitePrestamos << std::endl;
}

int Usuario::getLimitePrestamos() const {
    return limitePrestamos;
}
