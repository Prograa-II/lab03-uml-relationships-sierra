//
// Created by felip on 11/8/2020.
//

#include "Profesor.h"

Profesor::Profesor(){
    this->cantidadCursos = 0;
    this->horasExtra =0;
    this->horasTrabajo =0;
}
Profesor::Profesor(int cantCur, int horExtras, int horTrabajo) : cantidadCursos(cantCur), horasExtra(horExtras), horasTrabajo(horTrabajo){
}
int Profesor::getCantidadCursos(){
    return cantidadCursos;
}
int Profesor::getHorasTrabajo(){
    return horasTrabajo;
}
int Profesor::getHorasExtra(){
    return horasExtra;
}
void Profesor::setCantidadCursos(int cantidadCursos){
    this->cantidadCursos = cantidadCursos;
}
void Profesor::setHorasTrabajo(int horasTrabajo){
    this->horasTrabajo = horasTrabajo;
}
void Profesor::setHorasExtra( int horasExtra){
    this->horasExtra = horasExtra;
}
std::string Profesor::toString() const{
    std::stringstream s;
    s<<"Datos del profesor: "<<std::endl;
    s<<"Cantidad de cursos: "<<cantidadCursos<<std::endl;
    s<<"Cantidad de horas extra: "<<horasExtra<<std::endl;
    s<<"Cantidad de horas trabajo: "<<horasTrabajo<<std::endl;
    return s.str();
}