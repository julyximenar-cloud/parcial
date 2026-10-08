#include "SistemaAlquiler.h"
#include <iostream>

void SistemaAlquiler::registrarVehiculo(Vehiculo* vehiculo) {
    vehiculos.push_back(vehiculo);
}

void SistemaAlquiler::alquilarVehiculo(std::string placa) {

    for (Vehiculo* vehiculo : vehiculos) {

        if (vehiculo->getPlaca() == placa &&
            vehiculo->estaDisponible()) {

            vehiculo->alquilar();

            std::cout << "Vehiculo alquilado."
                      << std::endl;

            return;
        }
    }

    std::cout << "Vehiculo no disponible."
              << std::endl;
}

void SistemaAlquiler::devolverVehiculo(std::string placa) {

    for (Vehiculo* vehiculo : vehiculos) {

        if (vehiculo->getPlaca() == placa) {

            vehiculo->devolver();

            std::cout << "Vehiculo devuelto."
                      << std::endl;

            return;
        }
    }
}

void SistemaAlquiler::mostrarDisponibles() const {

    for (Vehiculo* vehiculo : vehiculos) {

        if (vehiculo->estaDisponible()) {
            vehiculo->mostrarInformacion();
            std::cout << std::endl;
        }
    }
}
