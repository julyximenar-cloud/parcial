#include "Bicicleta.h"
#include <iostream>

Bicicleta::Bicicleta(
    std::string marca,
    std::string modelo,
    std::string placa,
    std::string tipo
)
    : Vehiculo(marca, modelo, placa) {

    this->tipo = tipo;
}

void Bicicleta::mostrarInformacion() const {

    std::cout << "BICICLETA" << std::endl;
    std::cout << "Marca: " << marca << std::endl;
    std::cout << "Modelo: " << modelo << std::endl;
    std::cout << "Tipo: " << tipo << std::endl;
}
