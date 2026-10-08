#pragma once

#include <string>

class Usuario {
protected:
    std::string nombre;
    int limitePrestamos;

public:
    Usuario(std::string nombre, int limitePrestamos);

    virtual void mostrarInformacion() const;

    int getLimitePrestamos() const;

    virtual ~Usuario() = default;
};
