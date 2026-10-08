#pragma once

#include "Usuario.h"

class Profesor : public Usuario {
public:
    Profesor(std::string nombre);

    void mostrarInformacion() const override;
};
