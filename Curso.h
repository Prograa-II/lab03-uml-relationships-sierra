//
// Created by felip on 11/8/2020.
//

#ifndef BASIC_00_EXAMPLE_CURSO_H
#define BASIC_00_EXAMPLE_CURSO_H
#include <sstream>
#include <iomanip>
#include "Profesor.h"

class Curso {

private:
    std::string code;
    std::string name;
    int date;
    int hour;
    Profesor *professor;

public:
    Curso();
    Curso(std::string code, std::string name, int date, int hour, Profesor*professor);
    std::string getCode();
    void setCode(std::string code);
    int getHour();
    int setHour(int hour);
    int getDate();
    int setDate(int date);
    Profesor getProfessor();
    void setProfessor(Profesor*professor);
    std::string getName();
    void setName(std::string name);
    std::string toString();


};


#endif //BASIC_00_EXAMPLE_CURSO_H
