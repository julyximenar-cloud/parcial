#pragma once

#include "Usuario.h"

class Estudiante : public Usuario {
public:
    Estudiante(std::string nombre);

    void mostrarInformacion() const override;
};
