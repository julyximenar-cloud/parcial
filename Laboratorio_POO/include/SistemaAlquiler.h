#pragma once

#include <vector>
#include <string>
#include "Vehiculo.h"

class SistemaAlquiler {
private:
    std::vector<Vehiculo*> vehiculos;

public:
    void registrarVehiculo(Vehiculo* vehiculo);

    void alquilarVehiculo(std::string placa);

    void devolverVehiculo(std::string placa);

    void mostrarDisponibles() const;
};
