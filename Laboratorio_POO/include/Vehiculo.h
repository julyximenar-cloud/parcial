#pragma once

#include <string>

class Vehiculo {
protected:
    std::string marca;
    std::string modelo;
    std::string placa;
    bool disponible;

public:
    Vehiculo(
        std::string marca,
        std::string modelo,
        std::string placa
    );

    virtual void mostrarInformacion() const = 0;

    std::string getPlaca() const;
    bool estaDisponible() const;

    void alquilar();
    void devolver();

    virtual ~Vehiculo() = default;
};
