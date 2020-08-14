//
// Created by felip on 11/8/2020.
//

#ifndef BASIC_00_EXAMPLE_ESCUELA_H
#define BASIC_00_EXAMPLE_ESCUELA_H
#include <iostream>
#include <vector>
#include "Estudiante.h"
#include "Profesor.h"
#include "Curso.h"
class Escuela {
    std::string carrera;
    Estudiante* estudiante;
    Curso* curso;
    Profesor* profesor;
    std::vector<Curso>listaCursos;
    std::vector<Estudiante>listaEstudiantes;
    std::vector<Profesor>listaProfesor;
public:
    Escuela(const std::string &carrera, Estudiante *estudiante, Curso *curso, Profesor *profesor,
            const std::vector<Curso> &listaCursos, const std::vector<Estudiante> &listaEstudiantes,
            const std::vector<Profesor> &listaProfesor);
    Escuela();

    virtual ~Escuela();

    const std::string &getCarrera() const;

    void setCarrera(const std::string &carrera);

    Estudiante *getEstudiante() const;

    void setEstudiante(Estudiante *estudiante);

    Curso *getCurso() const;

    void setCurso(Curso *curso);

    Profesor *getProfesor() const;

    void setProfesor(Profesor *profesor);

    const std::vector<Curso> &getListaCursos() const;

    void setListaCursos(const std::vector<Curso> &listaCursos);

    const std::vector<Estudiante> &getListaEstudiantes() const;

    void setListaEstudiantes(const std::vector<Estudiante> &listaEstudiantes);

    const std::vector<Profesor> &getListaProfesor() const;

    void setListaProfesor(const std::vector<Profesor> &listaProfesor);


};


#endif //BASIC_00_EXAMPLE_ESCUELA_H
