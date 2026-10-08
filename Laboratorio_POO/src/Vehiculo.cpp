#include "Vehiculo.h"

Vehiculo::Vehiculo(
    std::string marca,
    std::string modelo,
    std::string placa
) {
    this->marca = marca;
    this->modelo = modelo;
    this->placa = placa;
    disponible = true;
}

std::string Vehiculo::getPlaca() const {
    return placa;
}

bool Vehiculo::estaDisponible() const {
    return disponible;
}

void Vehiculo::alquilar() {
    if (disponible) {
        disponible = false;
    }
}

void Vehiculo::devolver() {
    disponible = true;
}
