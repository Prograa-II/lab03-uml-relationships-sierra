//
// Created by felip on 11/8/2020.
//

#include "Universidad.h"

Universidad::Universidad(const std::string &nombre) : nombre(nombre) {}

Universidad::~Universidad() {

}

std::string Universidad::getNombre() {
    return nombre;
}

void Universidad::setNombre(std::string nombre) {
    this->nombre = nombre;
}
