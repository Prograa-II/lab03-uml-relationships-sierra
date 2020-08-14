//
// Created by felip on 11/8/2020.
//

#include "Curso.h"

Curso::Curso() {
    this->code="";
    this->name="";
    this->date=0;
    this->hour=0;
    this->professor= nullptr;
}

Curso::Curso(std::string code,std::string name, int date, int hour, Profesor *professor) {
    this->code=code;
    this->name=name;
    this->date=date;
    this->hour=hour;
    this->professor= professor;
}

std::string Curso::getCode() {
    return this->code;
}

void Curso::setCode(std::string code) {
    this->code=code;
}

int Curso::getHour() {
    return this->hour;
}

int Curso::setHour(int hour) {
    this->hour=hour;
}

int Curso::getDate() {
    return this->date;
}

int Curso::setDate(int date) {
    this->date=date;
}

Profesor Curso::getProfessor() {
    return *professor;

}

void Curso::setProfessor(Profesor*professor) {
    this->professor=professor;
}

std::string Curso::getName() {
    return this->name;
}

void Curso::setName(std::string name) {
    this->name=name;
}

std::string Curso::toString() {

    std::stringstream s;
    s << "\tName: " << getName() << std::endl;
    s << "\tCode: " << getCode() << std::endl;
    s << "\tDate: " << getDate() << std::endl;
    s << "\tHour: " << getHour() << std::endl;
    s << "\tProfessor: " <<professor<< std::endl;  //aca el getProfessor() me da error y no se por que :(
    return s.str();
    return std::string();
}


