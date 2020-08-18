//
// Created by felip on 11/8/2020.
//

#ifndef BASIC_00_EXAMPLE_PROFESOR_H
#define BASIC_00_EXAMPLE_PROFESOR_H

#include "Persona.h"
class Profesor : public Persona {
private:
    int cantidadCursos;
    int horasTrabajo;
    int horasExtra;

public:
    Profesor();
    Profesor(int, int, int);
    int getCantidadCursos();
    int getHorasTrabajo();
    int getHorasExtra();
    void setCantidadCursos(int cantidadCursos);
    void setHorasTrabajo(int HorasTrabajo);
    void setHorasExtra( int HorasExtra);
    std::string toString() const;

};


#endif //BASIC_00_EXAMPLE_PROFESOR_H
