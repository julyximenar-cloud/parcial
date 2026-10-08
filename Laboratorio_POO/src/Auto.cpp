#include "Auto.h"
#include <iostream>

Auto::Auto(
    std::string marca,
    std::string modelo,
    std::string placa,
    int capacidadPasajeros
)
    : Vehiculo(marca, modelo, placa) {

    this->capacidadPasajeros = capacidadPasajeros;
}

void Auto::mostrarInformacion() const {

    std::cout << "AUTO" << std::endl;
    std::cout << "Marca: " << marca << std::endl;
    std::cout << "Modelo: " << modelo << std::endl;
    std::cout << "Placa: " << placa << std::endl;
    std::cout << "Pasajeros: "
              << capacidadPasajeros << std::endl;
}
