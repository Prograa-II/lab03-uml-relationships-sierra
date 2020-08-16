//
// Created by felip on 11/8/2020.
//

#include "Estudiante.h"
Estudiante::Estudiante(){
this->creditosGanados = 0;
this->creditosPerdidos =0;
this->totalCreditos =0;
this->promedioFinal =0;

}
Estudiante::Estudiante(int credGanados, int credPerdidos, int totCreditos, double promFinal) : creditosGanados(credGanados),
                                        creditosPerdidos(credPerdidos), totalCreditos(totCreditos), promedioFinal(promFinal){
}
int Estudiante::getTotalCreditos(){
    return totalCreditos;
}
int Estudiante::getCreditosGanados(){
    return creditosGanados;
}
void Estudiante::setTotalCreditos(int totalCred){
    totalCreditos = totalCred;
}
void Estudiante::setCreditosPerdidos(int creditosPerd){
    creditosPerdidos = creditosPerd;
}
void Estudiante::setCreditosGanados(double promedioFI){
    promedioFinal = promedioFI;
}
void Estudiante::setListaCursos(){

}
std::vector<Curso>&  Estudiante::getListaCursos(){
    return listaCursos;
}
string Estudiante::toString() const{
    std::stringstream s;
    s<<"Datos del estudiante: "<<std::endl;
    s<< "Creditos ganados: "<< creditosGanados <<std::endl;
    s<<"Creditos perdidos: "<<creditosPerdidos<<std::endl;
    s<<"Total decreditos: "<< totalCreditos<<std::endl;
    s<<"Promedio final: "<< promedioFinal;
    return s.str();
}
