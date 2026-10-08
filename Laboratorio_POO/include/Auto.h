#pragma once

#include "Vehiculo.h"

class Auto : public Vehiculo {
private:
    int capacidadPasajeros;

public:
    Auto(
        std::string marca,
        std::string modelo,
        std::string placa,
        int capacidadPasajeros
    );

    void mostrarInformacion() const override;
};
