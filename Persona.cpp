//
// Created by felip on 11/8/2020.
//

#include "Persona.h"

Persona::Persona() {
    this->name="";
    this->id="";
    this->age=0;
}

Persona::Persona(std::string name, std::string id, int age) {
    this->name=name;
    this->id=id;
    this->age=age;
}

std::string Persona::getName() {
    return this->name;
}

void Persona::setName(std::string name) {
    this->name=name;
}

std::string Persona::getId() {
    return this->id;
}

void Persona::setId(std::string id) {
    this->id=id;
}

int Persona::getAge() {
    return this->age;
}

void Persona::setAge(int age) {
    this->age=age;
}
