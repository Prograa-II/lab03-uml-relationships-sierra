//
// Created by felip on 11/8/2020.
//

#ifndef BASIC_00_EXAMPLE_ESTUDIANTE_H
#define BASIC_00_EXAMPLE_ESTUDIANTE_H
#include "Persona.h"
#include "Curso.h"
#include <vector>
using std::string;

class Estudiante : public Persona {
    int totalCreditos;
    int creditosGanados;
    int creditosPerdidos;
    double promedioFinal;
    std::vector<Curso> listaCursos;

protected:
    Estudiante();
    Estudiante(int, int, int, double);
    int getTotalCreditos();
    int getCreditosGanados();
    void setTotalCreditos(int totalCreditos);
    void setCreditosPerdidos(int creditosPerdidos);
    void setCreditosGanados(double promedioFInal);
    void setListaCursos();
    std::vector<Curso>& getListaCursos();
    string toString() const;

};


#endif //BASIC_00_EXAMPLE_ESTUDIANTE_H
