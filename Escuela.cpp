//
// Created by felip on 11/8/2020.
//

#include "Escuela.h"

Escuela::Escuela() {}

Escuela::Escuela(const std::string &carrera, Estudiante *estudiante, Curso *curso, Profesor *profesor,
                 const std::vector<Curso> &listaCursos, const std::vector<Estudiante> &listaEstudiantes,
                 const std::vector<Profesor> &listaProfesor) : carrera(carrera), estudiante(estudiante), curso(curso),
                                                               profesor(profesor), listaCursos(listaCursos),
                                                               listaEstudiantes(listaEstudiantes),
                                                               listaProfesor(listaProfesor) {}

Escuela::~Escuela() {

}

const std::string &Escuela::getCarrera() const {
    return carrera;
}

void Escuela::setCarrera(const std::string &carrera) {
    Escuela::carrera = carrera;
}

Estudiante *Escuela::getEstudiante() const {
    return estudiante;
}

void Escuela::setEstudiante(Estudiante *estudiante) {
    Escuela::estudiante = estudiante;
}

Curso *Escuela::getCurso() const {
    return curso;
}

void Escuela::setCurso(Curso *curso) {
    Escuela::curso = curso;
}

Profesor *Escuela::getProfesor() const {
    return profesor;
}

void Escuela::setProfesor(Profesor *profesor) {
    Escuela::profesor = profesor;
}

const std::vector<Curso> &Escuela::getListaCursos() const {
    return listaCursos;
}

void Escuela::setListaCursos(const std::vector<Curso> &listaCursos) {
    Escuela::listaCursos = listaCursos;
}

const std::vector<Estudiante> &Escuela::getListaEstudiantes() const {
    return listaEstudiantes;
}

void Escuela::setListaEstudiantes(const std::vector<Estudiante> &listaEstudiantes) {
    Escuela::listaEstudiantes = listaEstudiantes;
}

const std::vector<Profesor> &Escuela::getListaProfesor() const {
    return listaProfesor;
}

void Escuela::setListaProfesor(const std::vector<Profesor> &listaProfesor) {
    Escuela::listaProfesor = listaProfesor;
}
